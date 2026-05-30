#include "ProjectileState.h"

FProjectileState::FProjectileState() {
    this->HomingTargetComponent = nullptr;
    this->IsSimulating = false;
    this->IsBouncy = false;
    this->IsHoming = false;
    this->IsPenetrating = false;
    this->Velocity = FVector::ZeroVector;
    this->Location = FVector::ZeroVector;
}

