#include "BackfillAmmoComponent.h"

UBackfillAmmoComponent::UBackfillAmmoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BreakOnFire = 0.00f;
    this->Amount = 1;
}

void UBackfillAmmoComponent::OnWeaponFired() {
}

void UBackfillAmmoComponent::EnableTick() {
}


