#include "AmmoRegenComponent.h"

UAmmoRegenComponent::UAmmoRegenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmmoGeneratedFromOverHeat = 30.00f;
    this->OverheatRechargeDelay = 0.00f;
    this->OverheatRechargeEndTimeGap = 0.00f;
    this->RechargeRateMultiplier = 1.00f;
    this->RechargeDelay = 0.00f;
    this->FullyDrainedRechargeDelay = 0.00f;
    this->RechargeAmount = 1.00f;
}

void UAmmoRegenComponent::StartRecharge() {
}

void UAmmoRegenComponent::OnWeaponOverHeated(AItem* Item) {
}

void UAmmoRegenComponent::OnWeaponFired() {
}


