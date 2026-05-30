#include "BoomerangSyncer.h"

FBoomerangSyncer::FBoomerangSyncer() {
    this->IsGoingBack = false;
    this->TotalTime = 0.00f;
    this->PrevPos = FVector::ZeroVector;
    this->NextPos = FVector::ZeroVector;
    this->Velocity = FVector::ZeroVector;
}

