#include "BeamCollision.h"

FBeamCollision::FBeamCollision() {
    this->bBeamBlocked = false;
    this->BeamHitDistance = 0.00f;
    this->FinalTraceStart = FVector::ZeroVector;
    this->FinalTraceEnd = FVector::ZeroVector;
}

