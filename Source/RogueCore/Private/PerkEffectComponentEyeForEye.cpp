#include "PerkEffectComponentEyeForEye.h"

UPerkEffectComponentEyeForEye::UPerkEffectComponentEyeForEye(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CoolDown = 0.00f;
    this->PhysicalDamageClass = nullptr;
    this->LoadedSTE = nullptr;
}

void UPerkEffectComponentEyeForEye::OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost, UHealthComponentBase* HealthComponent) {
}


