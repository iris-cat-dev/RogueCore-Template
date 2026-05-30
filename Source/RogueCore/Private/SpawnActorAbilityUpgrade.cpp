#include "SpawnActorAbilityUpgrade.h"

USpawnActorAbilityUpgrade::USpawnActorAbilityUpgrade() {
    this->ActorClass = nullptr;
    this->IsAllowedToSpawnOnClient = true;
    this->Lifetime = 0.00f;
    this->StackLifetime = false;
}


