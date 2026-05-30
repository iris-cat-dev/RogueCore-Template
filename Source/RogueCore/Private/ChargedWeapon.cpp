#include "ChargedWeapon.h"
#include "Net/UnrealNetwork.h"

AChargedWeapon::AChargedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FP_OverheatAnim = nullptr;
    this->WeaponOverheatAnim = nullptr;
    this->FP_ChargeupMontage = nullptr;
    this->TP_ChargeupMontage = nullptr;
    this->ChargeupParticles = nullptr;
    this->ChargeupParticleInstance = nullptr;
    this->ChargeupFireMuzzleFlash = nullptr;
    this->NormalFiresound = nullptr;
    this->FullyChargedFireSound = nullptr;
    this->ChargeSpeed = 0.50f;
    this->Charging = false;
    this->ChargeProgress = 0.00f;
    this->ShotCostAtBelowFullCharge = 1;
    this->ShotCostAtFullCharge = 10;
    this->ChargedShotsOnly = false;
    this->ChargeShotAllowedAfterProgress = 1.00f;
    this->AutoFireWhenOverheated = true;
    this->TotalHeat = 0.00f;
    this->CoolingRate = 0.60f;
    this->HeatPerSecondWhileCharging = 0.05f;
    this->HeatPerSecondWhenCharged = 0.05f;
    this->HeatPerNormalShot = 0.20f;
    this->HeatPerChargedShot = 0.40f;
}

void AChargedWeapon::SetOverheated(bool IsOverheated) {
}

void AChargedWeapon::SetChargeSpeedMultiplier(float Value) {
}

void AChargedWeapon::Server_SetIsCharging_Implementation(bool isCharging) {
}





void AChargedWeapon::OnRep_Charging() {
}

bool AChargedWeapon::GetIsCharging() const {
    return false;
}

void AChargedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AChargedWeapon, Charging);
}


