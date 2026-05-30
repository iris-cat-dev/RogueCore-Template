#include "BTService_FindAttackable.h"

UBTService_FindAttackable::UBTService_FindAttackable() {
    this->MustBeAlive = false;
    this->MustBeDowned = false;
    this->IgnoreIncapacitated = true;
    this->SwithToBetterTargets = true;
    this->RegisterForPositioning = true;
    this->IsFlying = false;
    this->CanShoot = false;
    this->TargetingRange = 3500.00f;
    this->CurrentRegisteredTarget = nullptr;
}


