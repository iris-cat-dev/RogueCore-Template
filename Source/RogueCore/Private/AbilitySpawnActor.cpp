#include "AbilitySpawnActor.h"

AAbilitySpawnActor::AAbilitySpawnActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Amount = 0.00f;
    this->Lifetime = -1.00f;
    this->BlockReplicationToActor = nullptr;
    this->bIsDamageEnabled = true;
}

void AAbilitySpawnActor::SetDamageEnabled(const bool IsEnabled) {
}

bool AAbilitySpawnActor::IsDamageEnabled() const {
    return false;
}


