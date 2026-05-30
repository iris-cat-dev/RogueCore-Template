#include "BodyRotationManagerComponent.h"

UBodyRotationManagerComponent::UBodyRotationManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LerpSpeed = 0.40f;
}

void UBodyRotationManagerComponent::ApplyKnockBack(float Force, float duration, const FVector& Direction) {
}


