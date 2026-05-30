#include "ChargedProjectileLauncherComponent.h"
#include "Templates/SubclassOf.h"

UChargedProjectileLauncherComponent::UChargedProjectileLauncherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NormalProjectileClass = nullptr;
    this->ChargedProjectileClass = nullptr;
    this->ProjectileChangeChargeValue = 1.00f;
}

void UChargedProjectileLauncherComponent::SetProjectileClassCharged(TSubclassOf<AProjectileBase> NewProjectileClass) {
}

void UChargedProjectileLauncherComponent::SetProjectileClass(TSubclassOf<AProjectileBase> NewProjectileClass) {
}


