#include "CarriableComponent.h"

UCarriableComponent::UCarriableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideCarryAnimationSet = nullptr;
    this->OverrideThrowAnimationSet = nullptr;
    this->CarriedBy = nullptr;
    this->OverrideCarriableSpeedPenalty = -1.00f;
}

bool UCarriableComponent::PickupItem(APlayerCharacter* byCharacter) {
    return false;
}

void UCarriableComponent::DropItem() {
}

void UCarriableComponent::AttachChanged(bool Attached, const FVector PrevScale) {
}


