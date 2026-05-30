#include "ElementEventSetup.h"

FElementEventSetup::FElementEventSetup() {
    this->ActivationCost = 0.00f;
    this->DeactivationCost = 0.00f;
    this->DeactivationImmunityTime = 0.00f;
    this->EventStateVariance = 0.00f;
    this->ElementStateLockType = EElementEventLockType::None;
    this->LockVariance = 0.00f;
    this->EventStateDurationRange = FRandRange();
    this->LockDurationRange = FRandRange();
    this->EventComponentSoftPtr = nullptr;
    this->StayActiveConditions = FElementConditionArray();
}

