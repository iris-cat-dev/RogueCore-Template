#include "PlayerMovementComponent.h"

UPlayerMovementComponent::UPlayerMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugFastMove = false;
    this->SlidingOnIceSound = nullptr;
    this->LedgeClimbZVelocity = 0.00f;
    this->MovementPenalty = 1.00f;
    this->Character = nullptr;
}

void UPlayerMovementComponent::RemoveGravityModifier(UObject* sourceObject) {
}

void UPlayerMovementComponent::AddGravityModifier(UObject* sourceObject, float effect) {
}


