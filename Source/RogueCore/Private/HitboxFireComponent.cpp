#include "HitboxFireComponent.h"

UHitboxFireComponent::UHitboxFireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Damage = nullptr;
    this->DamageRangeOffset = 100.00f;
}

void UHitboxFireComponent::Server_StopFire_Implementation() {
}


