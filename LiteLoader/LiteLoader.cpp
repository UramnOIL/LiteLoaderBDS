#include "pch.h"
using std::vector;
Logger<stdio_commit> LOG(stdio_commit{"[LL] "});

namespace fs = std::filesystem;

static void printErrorMessage() {
    DWORD error_message_id = ::GetLastError();
    if (error_message_id == 0) {
        std::wcerr << "Error\n";
        return;
    }
    std::cerr << "[Error] error_message_id: " << error_message_id << std::endl;
    LPWSTR message_buffer = nullptr;
    FormatMessage(
        FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_FROM_SYSTEM,
        NULL, error_message_id, MAKELANGID(0x09, SUBLANG_DEFAULT), (LPWSTR)&message_buffer, 0, NULL);
    std::wcerr << "[Error] " << message_buffer;
    LocalFree(message_buffer);
}

static void fixPluginsLibDir() { // add plugins folder to path to fix dependent problem
    WCHAR*       buffer = new WCHAR[8192];
    auto         sz     = GetEnvironmentVariableW(TEXT("PATH"), buffer, 8192);
    std::wstring PATH{buffer, sz};
    sz = GetCurrentDirectoryW(8192, buffer);
    std::wstring CWD{buffer, sz};
    SetEnvironmentVariableW(TEXT("PATH"), (CWD + L"\\plugins;" + PATH).c_str());
    delete[] buffer;
}

static vector<std::wstring> getPreloadList() {
    //若在preload.conf中，则不加载
    vector<std::wstring> preload_list{};

    if (fs::exists(fs::path(TEXT(".\\plugins\\preload.conf")))) {
        std::wifstream dllList(TEXT(".\\plugins\\preload.conf"));
        if (dllList) {
            std::wstring dllName;
            while (getline(dllList, dllName)) {
                if (dllName.back() == TEXT('\n'))
                    dllName.pop_back();
                if (dllName.back() == TEXT('\r'))
                    dllName.pop_back();

                if (dllName.empty() || dllName.front() == TEXT('#'))
                    continue;
                preload_list.push_back(dllName);
            }
            dllList.close();
        }
    }
    return preload_list;
}

extern std::string                             loadingPluginName;
extern std::unordered_map<std::string, Plugin> plugins;

bool loadPlugin(fs::path dllPath) {
    vector<std::wstring> preload_list = getPreloadList();
    bool loaded = false;
    for (auto& p : preload_list)
        if (p.find(std::wstring(dllPath)) != std::wstring::npos) {
            loaded = true;
            break;
        }
    for (auto& [name, plugin] : plugins) {
        if (plugin.filePath == canonical(dllPath).wstring())
            loaded = true;
    }
    if (loaded)
        return false;
    auto lib = LoadLibrary(dllPath.c_str());
    if (lib) {
        auto pluginFileName = canonical(dllPath).filename().u8string();
        LOG("Plugin " + pluginFileName + " loaded");
        //Call onPostInit, don't delete
        auto fn = GetProcAddress(lib, "onPostInit");
        if (!fn) {
            // std::wcerr << "Warning!!! mod" << name << " doesnt have a onPostInit\n";
        } else {
            try {
                ((void (*)())fn)();
            } catch (...) {
                std::wcerr << "[Error] plugin " << pluginFileName.c_str() << " throws an exception when onPostInit\n";
                //std::this_thread::sleep_for(std::chrono::seconds(10));
                //exit(1);
            }
        }
        if (loadingPluginName.empty()) {
            LOG.p<LOGLVL::Error>(pluginFileName, " is not registered!");
            loadingPluginName = pluginFileName;
            registerPlugin(pluginFileName, "unknown plugin", "unknown");
        }
        completePluginInfo(loadingPluginName, canonical(dllPath).wstring(), lib);
        loadingPluginName.clear();
        return true;
    } else {
        LOG.p<LOGLVL::Error>("Error when loading " + dllPath.filename().u8string() + "");
        printErrorMessage();
        return false;
    }
}
void loadPlugins() {
    fixPluginsLibDir();
    fs::create_directory("plugins");
    fs::directory_iterator ent("plugins");
    short                  pluginCount  = 0;

    LOG("Loading plugins");
    for (auto& i : ent) {
        if (i.is_regular_file() && i.path().extension().u8string() == ".dll") {
            if (loadPlugin(i.path()))
                pluginCount++;
        }
    }
    LOG(std::to_string(pluginCount) + " plugin(s) loaded");
}

vector<function<void(PostInitEV)>> Post_init_call_backs;
LIAPI void                         Event::addEventListener(function<void(PostInitEV)> callback) {
    Post_init_call_backs.push_back(callback);
}
std::wstring s2ws(string str) {
    std::wstring result;
    int          len    = MultiByteToWideChar(CP_ACP, 0, str.c_str(), str.size(), NULL, 0);
    TCHAR*       buffer = new TCHAR[(long)len + 1];
    MultiByteToWideChar(CP_ACP, 0, str.c_str(), str.size(), buffer, len);
    buffer[len] = '\0';
    result.append(buffer);
    delete[] buffer;
    return result;
}

void FixUpCWD() {
    string buf;
    buf.assign(8192, '\0');
    GetModuleFileNameA(nullptr, buf.data(), 8192);
    buf = buf.substr(0, buf.find_last_of('\\'));
    SetCurrentDirectoryA(buf.c_str());
}

void startWBThread();
void checkUpdate();
void registerCommands();

static void entry(bool fix_cwd) {
    //Prohibit pop-up windows to facilitate automatic restart
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOALIGNMENTFAULTEXCEPT);
    if (fix_cwd) {
        FixUpCWD();
    }
    loadPlugins();
    XIDREG::initAll();                            // Initialize the xuid database
    registerCommands();                           // Register built-in commands
    Event::addEventListener([](ServerStartedEV) { // Server started event
        startWBThread();
        LOG("LiteLoader is distributed under the GPLv3 License");
        LCID           localeID = GetUserDefaultLCID();
        unsigned short lang     = localeID & 0xFF;
        if (lang == LANG_CHINESE) {
            LOG(u8"\u611f\u8c22\u65cb\u5f8b\u4e91 rhymc.com \u5bf9\u672c\u9879\u76ee\u7684\u652f\u6301");
        }
        checkUpdate();
    });

    PostInitEV post_init_ev; // Register PostInit event
    for (size_t count = 0; count < Post_init_call_backs.size(); count++) {
        Post_init_call_backs[count](post_init_ev);
    }
}

#include <windows.h>

#include <Urlmon.h>
#pragma comment(lib, "Urlmon")

std::string TCHAR2STRING(TCHAR* str) {
    std::string strstr;
    try {
        int iLen = WideCharToMultiByte(CP_ACP, 0, str, -1, NULL, 0, NULL, NULL);

        char* chRtn = new char[iLen * sizeof(char)];

        WideCharToMultiByte(CP_ACP, 0, str, -1, chRtn, iLen, NULL, NULL);

        strstr = chRtn;
    } catch (std::exception e) {
    }

    return strstr;
}

THook(int, "main", int a, void* b) {
    std::ios::sync_with_stdio(false);
    HWND         hwnd = GetConsoleWindow();
    std::wstring s    = L"LiteLoaderBDS " + s2ws(LITELOADER_VERSION);
    SetWindowText(hwnd, s.c_str());
    entry(a > 1);
    return original(a, b);
}