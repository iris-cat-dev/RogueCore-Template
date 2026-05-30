#include "MicroMissileLauncher.h"
#include "ChargedProjectileLauncherComponent.h"
#include "Net/UnrealNetwork.h"

AMicroMissileLauncher::AMicroMissileLauncher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LauncherComponent = CreateDefaultSubobject<UChargedProjectileLauncherComponent>(TEXT("ProjectileLauncherComponent"));
    this->ChargeTime = 2.00f;
    this->ChargeMaxFireCount = 9;
    this->BuckShotDelay = 2.00f;
    this->ShotDirectionHorizontalDegreeOffset = 0.00f;
    this->ShotDirectionVerticleDegreeOffset = 0.00f;
    this->FireMode = EMicroMissileLauncherFireMode::Normal;
    this->DisableHomingOnRelease = false;
    this->MaxHomingProjectiles = 0.00f;
    this->WPN_Fire_Empty_Mag = nullptr;
    this->WPN_Fire_Level2 = nullptr;
    this->WPN_Fire_Level2_Empty_Mag = nullptr;
    this->WPN_Fire_Level3 = nullptr;
    this->WPN_Fire_Level3_Empty_Mag = nullptr;
    this->WPN_Mag_Feed = nullptr;
    this->WPN_Mag_And_Barrel_Feed = nullptr;
    this->ChargedMissileFireSound = nullptr;
    this->MML_ClipCount = 0;
}

void AMicroMissileLauncher::Server_SetIsCharging_Implementation(bool isCharging) {
}

void AMicroMissileLauncher::Server_SetChargedMissile_Implementation(bool isCharged) {
}

void AMicroMissileLauncher::OnRep_MML_ClipCount() {
}

bool AMicroMissileLauncher::IsNextShotBuckShot() {
    return false;
}

int32 AMicroMissileLauncher::GetChargeCurrentFireCount() {
    return 0;
}

void AMicroMissileLauncher::All_SetChargedMissile_Implementation(bool isCharged) {
}

void AMicroMissileLauncher::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMicroMissileLauncher, MML_ClipCount);
}


