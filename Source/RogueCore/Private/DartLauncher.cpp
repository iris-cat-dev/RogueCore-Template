#include "DartLauncher.h"
#include "ProjectileLauncherComponent.h"

ADartLauncher::ADartLauncher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->projectileLauncher = CreateDefaultSubobject<UProjectileLauncherComponent>(TEXT("Launcher"));
    this->MuzzleEffect = nullptr;
    this->FP_FireAnimation = nullptr;
    this->TP_FireAnimation = nullptr;
    this->DeactivationTime = 0.20f;
    this->FireRate = 1.00f;
}

void ADartLauncher::Server_ShowFire_Implementation() {
}

void ADartLauncher::All_ShowFire_Implementation() {
}


