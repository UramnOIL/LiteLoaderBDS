// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Agent : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENT
public:
    class Agent& operator=(class Agent const &) = delete;
    Agent(class Agent const &) = delete;
    Agent() = delete;
#endif


public:
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Agent();
    /*41*/ virtual void __unk_vfn_41();
    /*44*/ virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /*49*/ virtual void normalTick();
    /*59*/ virtual bool isInvisible() const;
    /*60*/ virtual bool canShowNameTag() const;
    /*61*/ virtual void __unk_vfn_61();
    /*65*/ virtual std::string getFormattedNameTag() const;
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*95*/ virtual bool isPickable();
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual void __unk_vfn_99();
    /*106*/ virtual void __unk_vfn_106();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*142*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*161*/ virtual void setCarriedItem(class ItemStack const &);
    /*182*/ virtual void __unk_vfn_182();
    /*194*/ virtual bool canBePulledIntoVehicle() const;
    /*196*/ virtual void __unk_vfn_196();
    /*212*/ virtual bool canBeAffected(class MobEffectInstance const &) const;
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*230*/ virtual bool isWorldBuilder() const;
    /*232*/ virtual bool isAdventure() const;
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*252*/ virtual void kill();
    /*267*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*269*/ virtual void __unk_vfn_269();
    /*270*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*277*/ virtual void __unk_vfn_277();
    /*285*/ virtual void __unk_vfn_285();
    /*286*/ virtual void knockback(class Actor *, int, float, float, float, float, float);
    /*297*/ virtual void travel(float, float, float);
    /*300*/ virtual void aiStep();
    /*313*/ virtual void __unk_vfn_313();
    /*317*/ virtual void __unk_vfn_317();
    /*343*/ virtual bool createAIGoals();
    /*350*/ virtual bool canExistWhenDisallowMob() const;
    /*351*/ virtual void __unk_vfn_351();
    /*356*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*365*/ virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENT
    MCVAPI bool breaksFallingBlocks() const;
    MCVAPI bool getAlwaysShowNameTag() const;
    MCVAPI bool interactPreventDefault();
    MCVAPI bool isTargetable() const;
#endif
    MCAPI Agent(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI class Vec3 doServerTravel(class AABB, enum AgentTravelType);
    MCAPI float getMoveSpeedScalar() const;
    MCAPI int getSelectedSlot() const;
    MCAPI bool isValidSlotNum(int);
    MCAPI void setMoveTarget(class Vec3 const &);
    MCAPI void setNameTagFromOwner(class Player const &);
    MCAPI void startCommandMode();
    MCAPI void stopCommandMode();
    MCAPI bool swingAnimationCompleted();
    MCAPI void swingArm();
    MCAPI void tryFireCreateEvent(class Player &);
    MCAPI static class Vec3 roundTeleportPos(class Vec3 const &);
    MCAPI static class Agent * tryGetFromEntity(class EntityContext &, bool);

//private:
    MCAPI class ContainerComponent * _getContainerComponent();


private:


};