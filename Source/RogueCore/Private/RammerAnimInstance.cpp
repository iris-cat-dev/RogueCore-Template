#include "RammerAnimInstance.h"

URammerAnimInstance::URammerAnimInstance() {
    this->CachedChargeComponent = nullptr;
    this->Acceleration = 0.00f;
    this->InterpolatedAcceleration = 0.00f;
    this->AccelerationInterpolationWeight = 0.10f;
    this->IsTelegraphing = false;
    this->isCharging = false;
    this->ChargeSpeed = 0.00f;
    this->HorizontalAngularChargeSpeed = 0.00f;
    this->VerticalAngularChargeSpeed = 0.00f;
    this->HasCarvedRecently = false;
    this->IsStoppingEarly = false;
    this->IsInBomberRun = false;
}


