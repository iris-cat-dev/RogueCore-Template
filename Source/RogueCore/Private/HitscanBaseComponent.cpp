#include "HitscanBaseComponent.h"

UHitscanBaseComponent::UHitscanBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageComponent = nullptr;
    this->Damage = nullptr;
    this->UseDamageComponent = true;
    this->MaxPenetrations = 0;
    this->ImpactDecalSize = EImpactDecalSize::Small;
    this->RicochetBehavior = ERicochetBehavior::All;
    this->RicochetChance = 0.00f;
    this->RicochetOnWeakspotOnly = false;
    this->RicochetMaxRange = 700.00f;
}

void UHitscanBaseComponent::Server_StopFire_Implementation() {
}

void UHitscanBaseComponent::Server_RemoveDebris_Implementation(int32 instance, int32 Component) {
}


