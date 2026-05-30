#include "PerkEffectComponentThorns.h"

UPerkEffectComponentThorns::UPerkEffectComponentThorns(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageClass = nullptr;
    this->PhysicalDamageClass = nullptr;
    this->CoolDown = 0.00f;
    this->ThornsSTE = nullptr;
}

void UPerkEffectComponentThorns::OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost, UHealthComponentBase* HealthComponent) {
}


