#include "HomingFireModule.h"

AHomingFireModule::AHomingFireModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HomingProjectileClass = nullptr;
    this->TimeBetweenShots = 0.00f;
}


