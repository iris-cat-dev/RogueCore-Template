#include "DamageParams.h"

FDamageParams::FDamageParams() {
    this->Target = nullptr;
    this->HitComponent = nullptr;
    this->TargetHealth = nullptr;
    this->TargetArmorDamage = nullptr;
    this->TargetStats = nullptr;
    this->DamageCauser = nullptr;
    this->CauserWeaponTags = nullptr;
    this->CauserUpgradeContainer = nullptr;
    this->InstigatorUpgradeContainer = nullptr;
    this->CauserListenerCollection = nullptr;
    this->InstigatorListenerCollection = nullptr;
    this->TargetListenerCollection = nullptr;
    this->Instigator = nullptr;
    this->InstigatorStats = nullptr;
    this->MinionOwnerPawnStat = nullptr;
    this->PhysicalMaterial = nullptr;
    this->Impulse = nullptr;
    this->PrefetchedCritRoll = 0.00f;
    this->PrefetchedCritChance = 0.00f;
    this->OverriddenCritLevel = 0;
    this->ClipCount = 0;
    this->BoneIndex = 0;
    this->CollectBonuses = false;
    this->Location = FVector::ZeroVector;
}

