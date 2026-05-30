#include "PlayerAmbienceSoundComponent.h"

UPlayerAmbienceSoundComponent::UPlayerAmbienceSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Character = nullptr;
    this->RangeFromPlayer = 1000.00f;
    this->IsEnabled = false;
}

void UPlayerAmbienceSoundComponent::PlayAmbience() {
}


