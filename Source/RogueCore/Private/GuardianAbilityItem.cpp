#include "GuardianAbilityItem.h"

AGuardianAbilityItem::AGuardianAbilityItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequiredPerkToRepelEnemies = nullptr;
    this->QuickUseShout = nullptr;
    this->AuraShout = nullptr;
    this->SalvoActorClass = nullptr;
    this->AuraClass = nullptr;
    this->Item_QuickUseAnim = nullptr;
    this->Item_SecondaryQuickUseAnim = nullptr;
    this->Item_AuraUseAnim = nullptr;
    this->Item_SecondaryAuraUseAnim = nullptr;
    this->FP_QuickUseAnim = nullptr;
    this->TP_QuickUseAnim = nullptr;
    this->FP_AuraUseAnim = nullptr;
    this->TP_AuraUseAnim = nullptr;
    this->AruaDurationPerCharge = 4.00f;
}

void AGuardianAbilityItem::Server_ToggleAura_Implementation(bool Active, FVector_NetQuantize Origin, FRotator Rotation) {
}

void AGuardianAbilityItem::Server_QuickUse_Implementation(FVector_NetQuantize Origin, FRotator Rotation) {
}

bool AGuardianAbilityItem::IsAuraAvailable() const {
    return false;
}

bool AGuardianAbilityItem::IsAuraActive() const {
    return false;
}

void AGuardianAbilityItem::DrainTick() {
}

bool AGuardianAbilityItem::CanActivateAura() const {
    return false;
}

void AGuardianAbilityItem::AnimationPlayed() {
}

void AGuardianAbilityItem::All_ToggleAura_Implementation(bool Active, FVector_NetQuantize Origin, FRotator Rotation) {
}

void AGuardianAbilityItem::All_QuickUse_Implementation(FVector_NetQuantize Origin, FRotator Rotation) {
}


