#include "EscortMuleMovementState.h"

FEscortMuleMovementState::FEscortMuleMovementState() {
    this->TargetTransform = FTransform::Identity;
    this->Velocity = FVector::ZeroVector;
    this->AngularVelocity = FQuat::Identity;
}

