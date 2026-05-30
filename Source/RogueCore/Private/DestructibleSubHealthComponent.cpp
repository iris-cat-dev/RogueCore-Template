#include "DestructibleSubHealthComponent.h"
#include "Net/UnrealNetwork.h"

UDestructibleSubHealthComponent::UDestructibleSubHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxHealth = 0.00f;
    this->RadialDamageResistance = 0.00f;
    this->AllowInderectDamage = false;
    this->Damage = 0.00f;
    this->ArmorComponent = nullptr;
}

void UDestructibleSubHealthComponent::ResetHealth() {
}

void UDestructibleSubHealthComponent::OnRep_Damage(float oldDamage) {
}

void UDestructibleSubHealthComponent::ApplyDamage(const int32 NewDamage) {
}

void UDestructibleSubHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDestructibleSubHealthComponent, Damage);
}


