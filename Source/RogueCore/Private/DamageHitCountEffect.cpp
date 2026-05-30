#include "DamageHitCountEffect.h"

UDamageHitCountEffect::UDamageHitCountEffect() {
    this->DamagePerHit = 1.00f;
    this->DamageClass = nullptr;
    this->DamageParticle = nullptr;
    this->DamageSound = nullptr;
    this->DeadBugWalkingTargetMarking = false;
    this->ExtraDamageForCalculatingDBW = 0.00f;
    this->DeadBugWalkingSTE = nullptr;
}


