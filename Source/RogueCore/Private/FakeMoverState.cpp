#include "FakeMoverState.h"

FFakeMoverState::FFakeMoverState() {
    this->TickRate = 0.00f;
    this->TickTime = 0.00f;
    this->AccumulatedTime = 0.00f;
    this->Target = nullptr;
    this->NearSurface = false;
    this->SignedDistToSurface = 0.00f;
    this->PrevPos = FVector::ZeroVector;
    this->NextPos = FVector::ZeroVector;
    this->PrevSurfaceNormal = FVector::ZeroVector;
    this->NextSurfaceNormal = FVector::ZeroVector;
    this->Velocity = FVector::ZeroVector;
}

