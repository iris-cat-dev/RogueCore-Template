#include "DamageAttackComponent.h"

UDamageAttackComponent::UDamageAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackDamage = nullptr;
    this->Damage = nullptr;
}


