#include "WeaponFireComponent.h"

UWeaponFireComponent::UWeaponFireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinSpreadWhenMoving = 0.00f;
    this->MinSpreadWhenSprinting = 0.00f;
    this->MaxSpread = 5.00f;
    this->VerticalSpreadMultiplier = 1.00f;
    this->HorizontalSpredMultiplier = 1.00f;
    this->SpreadRecoveryPerSecond = 5.00f;
    this->SpreadPerShot = 2.00f;
    this->UseDynamicSpread = false;
    this->MinimumVerticalSpread = 0.00f;
    this->MinimumHorizontalSpread = 0.00f;
}

void UWeaponFireComponent::StopFire() {
}

void UWeaponFireComponent::Server_SetShotPower_Implementation(float shotPower) {
}

float UWeaponFireComponent::GetCurrentVerticalSpread() const {
    return 0.0f;
}

float UWeaponFireComponent::GetCurrentHorizontalSpread() const {
    return 0.0f;
}

void UWeaponFireComponent::Fire(const FVector& Origin, const FVector_NetQuantizeNormal& Direction, bool playFireFX) {
}


