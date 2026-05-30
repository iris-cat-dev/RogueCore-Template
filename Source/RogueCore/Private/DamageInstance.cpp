#include "DamageInstance.h"

FDamageInstance::FDamageInstance() {
    this->DamageVector = EDamageVector::Ranged;
    this->DamageType = nullptr;
    this->DamageImpulse = nullptr;
    this->Damage = 0.00f;
    this->StaggerChance = 0.00f;
    this->StaggerDuration = 0.00f;
    this->FearFactor = 0.00f;
    this->FrozenMultiplier = 0.00f;
    this->FriendlyFireMultiplier = 0.00f;
    this->SelfMultiplier = 0.00f;
    this->ArmorPenetration = 0.00f;
    this->ArmorMultiplier = 0.00f;
    this->Radius = 0.00f;
    this->MinDamagePct = 0.00f;
    this->MaxDamageRadius = 0.00f;
    this->WeakpointMultiplier = 0.00f;
    this->ArmorDamageType = EArmorDamageType::Normal;
    this->Method = EDamageMethod::Direct;
    this->StaggerOnlyOnWeakpointHit = false;
    this->ShattersArmor = false;
    this->Enabled = false;
    this->NotifyListeners = false;
    this->DynamicBonusesEnabled = false;
    this->CanCrit = false;
    this->FriendlyFireTag = FGameplayTag();
    this->ElementParams = FElementParams();
}

