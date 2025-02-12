// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DoublePlantBlock : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUBLEPLANTBLOCK
public:
    class DoublePlantBlock& operator=(class DoublePlantBlock const &) = delete;
    DoublePlantBlock(class DoublePlantBlock const &) = delete;
    DoublePlantBlock() = delete;
#endif


public:
    /*0*/ virtual ~DoublePlantBlock();
    /*3*/ virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /*7*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &, int &) const;
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*19*/ virtual void __unk_vfn_19();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual bool canContainLiquid() const;
    /*73*/ virtual void __unk_vfn_73();
    /*77*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*80*/ virtual void __unk_vfn_80();
    /*84*/ virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /*86*/ virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*89*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*90*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*96*/ virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*99*/ virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /*100*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*102*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*103*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /*105*/ virtual void __unk_vfn_105();
    /*116*/ virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*134*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*135*/ virtual bool isAuxValueRelevantForPicking() const;
    /*137*/ virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*139*/ virtual int getColorForParticle(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*144*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*157*/ virtual void __unk_vfn_157();
    /*168*/ virtual void __unk_vfn_168();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*171*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*173*/ virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*174*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*177*/ virtual void __unk_vfn_177();
    /*180*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*181*/ virtual enum BlockRenderLayer getRenderLayer() const;
    /*182*/ virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /*188*/ virtual void __unk_vfn_188();
    /*192*/ virtual void checkAlive(class BlockSource &, class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOUBLEPLANTBLOCK
    MCVAPI bool canBeSilkTouched() const;
#endif
    MCAPI DoublePlantBlock(std::string const &, int);
    MCAPI int getType(class BlockSource &, class BlockPos const &, class Block const &) const;
    MCAPI bool placeAt(class BlockSource &, class BlockPos const &, enum DoublePlantType, int, class Actor *) const;



};