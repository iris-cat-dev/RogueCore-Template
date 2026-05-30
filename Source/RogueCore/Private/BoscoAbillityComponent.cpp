#include "BoscoAbillityComponent.h"

UBoscoAbillityComponent::UBoscoAbillityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileClass = nullptr;
    this->StreamClass = nullptr;
    this->AbilityData = nullptr;
    this->InitializeAtBeginPlay = false;
}

int32 UBoscoAbillityComponent::GetMaxCharges(bool Total) const {
    return 0;
}

bool UBoscoAbillityComponent::GetIsSet() const {
    return false;
}

int32 UBoscoAbillityComponent::GetCharges() const {
    return 0;
}


