#include "DamageComponent.h"

UDamageComponent::UDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageImpulse = nullptr;
    this->Damage = 5.00f;
    this->armorDamageMultiplier = 1.00f;
    this->ArmorPenetration = 0.00f;
    this->ShattersArmor = false;
    this->DamageClass = nullptr;
    this->ArmorDamageType = EArmorDamageType::Normal;
    this->WeakpointDamageMultiplier = 1.00f;
    this->FrozenDamageBonusScale = 1.00f;
    this->FriendlyFireModifier = 1.00f;
    this->SelfFriendlyFireMultiplier = 1.00f;
    this->StaggerOnlyOnWeakpointHit = false;
    this->StaggerChance = 0.00f;
    this->StaggerDuration = 1.50f;
    this->FearFactor = 0.00f;
    this->UseAreaOfEffect = false;
    this->RadialDamage = 5.00f;
    this->NoFriendlyFireFromRadial = false;
    this->IgnoreOwnerFromRadial = true;
    this->RadialDamageClass = nullptr;
    this->MinDamagePct = 0.25f;
    this->DamageRadius = 100.00f;
    this->MaxDamageRadius = 50.00f;
}

void UDamageComponent::PreTestDamageConditions() {
}

float UDamageComponent::GetDamage() const {
    return 0.0f;
}

void UDamageComponent::DamageTargetFromHit(const FHitResult& HitResult) const {
}


