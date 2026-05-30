#include "WeaponHitCounterComponent.h"

UWeaponHitCounterComponent::UWeaponHitCounterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitEffect = nullptr;
    this->RequiresWeakpointHit = false;
    this->DamageListenerProfile = 0;
}

void UWeaponHitCounterComponent::Server_OnReloading_Implementation() {
}

void UWeaponHitCounterComponent::OnStoppedUsing() {
}

void UWeaponHitCounterComponent::OnReloading() {
}

void UWeaponHitCounterComponent::All_ShowDamageEffects_Implementation(const TArray<TWeakObjectPtr<AActor>>& Targets) {
}


