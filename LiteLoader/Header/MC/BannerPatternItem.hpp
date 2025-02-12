// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BannerPatternItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERPATTERNITEM
public:
    class BannerPatternItem& operator=(class BannerPatternItem const &) = delete;
    BannerPatternItem(class BannerPatternItem const &) = delete;
    BannerPatternItem() = delete;
#endif


public:
    /*0*/ virtual ~BannerPatternItem();
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*52*/ virtual void __unk_vfn_52();
    /*53*/ virtual int getPatternIndex() const;
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*96*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BANNERPATTERNITEM
    MCVAPI bool isPattern() const;
#endif
    MCAPI BannerPatternItem(std::string const &, int, enum BannerPatternItem::Type);



};