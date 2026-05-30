#include "ProjectileLauncherComponent.h"
#include "Templates/SubclassOf.h"

UProjectileLauncherComponent::UProjectileLauncherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileClass = nullptr;
}

void UProjectileLauncherComponent::SetProjectileClass(TSubclassOf<AProjectileBase> NewProjectileClass) {
}


