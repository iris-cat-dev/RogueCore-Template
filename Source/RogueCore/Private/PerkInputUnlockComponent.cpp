#include "PerkInputUnlockComponent.h"

UPerkInputUnlockComponent::UPerkInputUnlockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerkQuickUseIndex = 1;
    this->Perk = nullptr;
    this->PlayerInputComponent = nullptr;
}

void UPerkInputUnlockComponent::UnbindPerkInputActions() {
}


void UPerkInputUnlockComponent::MarkPerkUsed() {
}

bool UPerkInputUnlockComponent::IsPerkUnlocked() const {
    return false;
}

APlayerController* UPerkInputUnlockComponent::GetPlayerController() const {
    return NULL;
}

UPerkAsset* UPerkInputUnlockComponent::GetPerk() const {
    return NULL;
}

void UPerkInputUnlockComponent::BindPerkInputActions() {
}


