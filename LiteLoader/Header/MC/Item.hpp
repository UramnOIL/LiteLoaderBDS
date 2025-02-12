// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Item {

#define AFTER_EXTRA
// Add Member There
public:
class Tier {
public:
    Tier() = delete;
    Tier(Tier const&) = delete;
    Tier(Tier const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEM
public:
    class Item& operator=(class Item const &) = delete;
    Item(class Item const &) = delete;
    Item() = delete;
#endif


public:
    /*0*/ virtual ~Item();
    /*1*/ virtual bool initServer(class Json::Value &, class SemVersion const &);
    /*2*/ virtual void tearDown();
    /*3*/ virtual class Item & setDescriptionId(std::string const &);
    /*4*/ virtual std::string const & getDescriptionId() const;
    /*5*/ virtual int getMaxUseDuration(class ItemInstance const *) const;
    /*6*/ virtual int getMaxUseDuration(class ItemStack const *) const;
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual bool hasTag(class HashedString const &) const;
    /*9*/ virtual bool hasTag(struct ItemTag const &) const;
    /*10*/ virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual bool isArmor() const;
    /*13*/ virtual bool isBlockPlanterItem() const;
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual bool isCamera() const;
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual bool isDamageable() const;
    /*18*/ virtual bool isDyeable() const;
    /*19*/ virtual bool isDye() const;
    /*20*/ virtual enum ItemColor getItemColor() const;
    /*21*/ virtual bool isFertilizer() const;
    /*22*/ virtual bool isFood() const;
    /*23*/ virtual bool isThrowable() const;
    /*24*/ virtual bool isUseable() const;
    /*25*/ virtual class ItemComponent * getComponent(class HashedString const &) const;
    /*26*/ virtual class ICameraItemComponent * getCamera() const;
    /*27*/ virtual class IFoodItemComponent * getFood() const;
    /*28*/ virtual class FuelItemComponent const * getFuel() const;
    /*29*/ virtual class Item & setMaxStackSize(unsigned char);
    /*30*/ virtual class Item & setStackedByData(bool);
    /*31*/ virtual class Item & setMaxDamage(int);
    /*32*/ virtual class Item & setHandEquipped();
    /*33*/ virtual class Item & setUseAnimation(enum UseAnimation);
    /*34*/ virtual class Item & setMaxUseDuration(int);
    /*35*/ virtual class Item & setRequiresWorldBuilder(bool);
    /*36*/ virtual class Item & setExplodable(bool);
    /*37*/ virtual class Item & setFireResistant(bool);
    /*38*/ virtual class Item & setIsGlint(bool);
    /*39*/ virtual class Item & setShouldDespawn(bool);
    /*40*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*41*/ virtual void initializeFromNetwork(class CompoundTag const &);
    /*42*/ virtual std::vector<std::string> validateFromNetwork(class CompoundTag const &);
    /*43*/ virtual enum BlockShape getBlockShape() const;
    /*44*/ virtual bool canBeDepleted() const;
    /*45*/ virtual bool canDestroySpecial(class Block const &) const;
    /*46*/ virtual int getLevelDataForAuxValue(int) const;
    /*47*/ virtual bool isStackedByData() const;
    /*48*/ virtual short getMaxDamage() const;
    /*49*/ virtual int getAttackDamage() const;
    /*50*/ virtual bool isHandEquipped() const;
    /*51*/ virtual bool isGlint(class ItemStackBase const &) const;
    /*52*/ virtual void __unk_vfn_52();
    /*53*/ virtual int getPatternIndex() const;
    /*54*/ virtual void __unk_vfn_54();
    /*55*/ virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /*56*/ virtual bool canDestroyInCreative() const;
    /*57*/ virtual bool isDestructive(int) const;
    /*58*/ virtual bool isLiquidClipItem(int) const;
    /*59*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /*60*/ virtual bool requiresInteract() const;
    /*61*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*62*/ virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /*63*/ virtual int getEnchantSlot() const;
    /*64*/ virtual int getEnchantValue() const;
    /*65*/ virtual int getArmorValue() const;
    /*66*/ virtual int getToughnessValue() const;
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual bool isValidAuxValue(int) const;
    /*69*/ virtual int getDamageChance(int) const;
    /*70*/ virtual float getViewDamping() const;
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*74*/ virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /*75*/ virtual bool hasCustomColor(class CompoundTag const *) const;
    /*76*/ virtual void __unk_vfn_76();
    /*77*/ virtual void clearColor(class ItemStackBase &) const;
    /*78*/ virtual void clearColor(class CompoundTag *) const;
    /*79*/ virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*82*/ virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const &) const;
    /*83*/ virtual int buildIdAux(short, class CompoundTag const *) const;
    /*84*/ virtual bool canUseOnSimTick() const;
    /*85*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*86*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*87*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /*88*/ virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /*89*/ virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /*90*/ virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /*91*/ virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /*92*/ virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /*93*/ virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /*94*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /*95*/ virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /*96*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*97*/ virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /*98*/ virtual std::string buildCategoryDescriptionName() const;
    /*99*/ virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /*100*/ virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /*101*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /*102*/ virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /*103*/ virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /*104*/ virtual class HashedString const & getCooldownType() const;
    /*105*/ virtual int getCooldownTime() const;
    /*106*/ virtual void fixupCommon(class ItemStackBase &) const;
    /*107*/ virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /*108*/ virtual short getDamageValue(class CompoundTag const *) const;
    /*109*/ virtual bool hasDamageValue(class CompoundTag const *) const;
    /*110*/ virtual void setDamageValue(class ItemStackBase &, short) const;
    /*111*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /*112*/ virtual enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /*113*/ virtual bool validFishInteraction(int) const;
    /*114*/ virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
    /*115*/ virtual enum ActorLocation getEquipLocation() const;
    /*116*/ virtual enum LevelSoundEvent getEquipSound() const;
    /*117*/ virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /*118*/ virtual void initClient(class Json::Value &, class SemVersion const &);
    /*119*/ virtual std::string getInteractText(class Player const &) const;
    /*120*/ virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /*121*/ virtual bool isEmissive(int) const;
    /*122*/ virtual struct Brightness getLightEmission(int) const;
    /*123*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*124*/ virtual int getIconYOffset() const;
    /*125*/ virtual class Item & setIcon(std::string const &, int);
    /*126*/ virtual class Item & setIcon(struct TextureUVCoordinateSet const &);
    /*127*/ virtual class Item & setIconAtlas(std::string const &, int);
    /*128*/ virtual bool canBeCharged() const;
    /*129*/ virtual void playSoundIncrementally(class ItemInstance const &, class Mob &) const;
    /*130*/ virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /*131*/ virtual float getFurnaceBurnIntervalMultipler(class ItemStackBase const &) const;
    /*132*/ virtual float getFurnaceXPmultiplier(class ItemStackBase const &) const;
    /*133*/ virtual std::string getAuxValuesDescription() const;
    /*134*/ virtual bool _checkUseOnPermissions(class Actor &, class ItemStackBase &, unsigned char const &, class BlockPos const &) const;
    /*135*/ virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /*136*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEM
    MCVAPI class mce::Color getBaseColor(class ItemStack const &) const;
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const &) const;
    MCVAPI bool hasCustomColor(class ItemStackBase const &) const;
    MCVAPI bool isActorPlacerItem() const;
    MCVAPI bool isBucket() const;
    MCVAPI bool isCandle() const;
    MCVAPI bool isComplex() const;
    MCVAPI bool isComponentBased() const;
    MCVAPI bool isMultiColorTinted(class ItemStack const &) const;
    MCVAPI bool isMusicDisk() const;
    MCVAPI bool isPattern() const;
    MCVAPI bool showsDurabilityInCreative() const;
    MCVAPI bool uniqueAuxValues() const;
#endif
    MCAPI Item(std::string const &, short);
    MCAPI void addOnResetBAIcallback(class std::function<void (void)> const &);
    MCAPI class Item & addTag(struct ItemTag const &);
    MCAPI class Item & addTag(class HashedString const &);
    MCAPI bool allowOffhand() const;
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const *) const;
    MCAPI bool calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    MCAPI float destroySpeedBonus(class ItemStackBase const &) const;
    MCAPI void fixupOnLoad(class ItemStackBase &) const;
    MCAPI void fixupOnLoad(class ItemStackBase &, class Level &) const;
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    MCAPI enum CreativeItemCategory getCreativeCategory() const;
    MCAPI std::string const & getCreativeGroup() const;
    MCAPI int getFrameCount() const;
    MCAPI std::string const & getFullItemName() const;
    MCAPI class HashedString const & getFullNameHash() const;
    MCAPI short getId() const;
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    MCAPI std::string const & getNamespace() const;
    MCAPI class HashedString const & getRawNameHash() const;
    MCAPI std::string const & getRawNameId() const;
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    MCAPI std::string getSerializedName() const;
    MCAPI enum UseAnimation getUseAnimation() const;
    MCAPI bool hasTag(unsigned __int64 const &) const;
    MCAPI bool isElytra() const;
    MCAPI bool isExplodable() const;
    MCAPI bool isFireResistant() const;
    MCAPI bool isNameTag() const;
    MCAPI bool isSeed() const;
    MCAPI class Item & setAllowOffhand(bool);
    MCAPI class Item & setCategory(enum CreativeItemCategory);
    MCAPI class Item & setCreativeGroup(std::string const &);
    MCAPI class Item & setFurnaceBurnIntervalMultiplier(float);
    MCAPI class Item & setFurnaceXPmultiplier(float);
    MCAPI class Item & setIsMirroredArt(bool);
    MCAPI class Item & setMinRequiredBaseGameVersion(class BaseGameVersion const &);
    MCAPI bool shouldDespawn() const;
    MCAPI bool updateCustomBlockEntityTag(class BlockSource &, class ItemStackBase &, class BlockPos const &) const;
    MCAPI bool useOn(class ItemStack &, class Actor &, int, int, int, unsigned char, class Vec3 const &) const;
    MCAPI static std::string const ICON_DESCRIPTION_PREFIX;
    MCAPI static std::string const TAG_DAMAGE;
    MCAPI static void addCreativeItem(class Block const &);
    MCAPI static void addCreativeItem(class ItemInstance const &);
    MCAPI static void addCreativeItem(class ItemStack const &);
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const &);
    MCAPI static void endCreativeItemDefinitions(bool);
    MCAPI static struct TextureUVCoordinateSet const & getIconTextureUVSet(class TextureAtlasItem const &, int, int);
    MCAPI static class TextureAtlasItem const & getTextureItem(std::string const &);
    MCAPI static struct TextureUVCoordinateSet getTextureUVCoordinateSet(std::string const &, int);
    MCAPI static bool isElytra(class ItemDescriptor const &);
    MCAPI static bool isElytraBroken(int);
    MCAPI static bool isFlyEnabled(class ItemInstance const &);
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const &, class ItemStackBase const &);
    MCAPI static class CreativeGroupInfo * mActiveCreativeGroupInfo;
    MCAPI static class CreativeItemGroupCategory * mActiveCreativeItemCategory;
    MCAPI static class CreativeItemRegistry * mActiveCreativeItemRegistry;
    MCAPI static bool const mGenerateDenyParticleEffect;
    MCAPI static struct TextureUVCoordinateSet mInvalidTextureUVCoordinateSet;
    MCAPI static class std::weak_ptr<class AtlasItemManager> mItemTextureItems;
    MCAPI static void setAtlasItemManager(class std::shared_ptr<class AtlasItemManager>);
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry *);
    MCAPI static struct NewBlockID toBlockId(short);

//protected:
    MCAPI void _helpChangeInventoryItemInPlace(class Actor &, class ItemStack &, class ItemStack &, enum ItemAcquisitionMethod) const;

//private:
    MCAPI static void _addLooseCreativeItemsClient();


protected:

private:
    MCAPI static std::unique_ptr<class std::set<short, struct std::less<short>, class std::allocator<short>>> mServerItemsUsedInCreativeItems;


};