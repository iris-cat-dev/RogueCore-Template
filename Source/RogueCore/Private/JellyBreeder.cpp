#include "JellyBreeder.h"
#include "Net/UnrealNetwork.h"

AJellyBreeder::AJellyBreeder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EggSpawnAnimation = nullptr;
    this->EggParticles = nullptr;
    this->EggSound = nullptr;
    this->EnemyToSpawn = nullptr;
    this->EggClass = nullptr;
    this->TimeBetweenBursts = 0.00f;
    this->TimeBetweenEggs = 0.00f;
    this->CloseToSpawnEggTime = 0.00f;
    this->WeakPointMaterial = nullptr;
    this->UnWeakPointMaterial = nullptr;
    this->EggBurstSize = 3;
    this->MaxJellies = 25;
    this->MultiplierOnHighPlayerCount = 1.00f;
    this->IsInBreedMode = false;
}

void AJellyBreeder::SpawnEnemies(AProjectile* egg, int32 AmountToSpawn) {
}

void AJellyBreeder::PlaySpawnEggAnim_Implementation() {
}

void AJellyBreeder::OnRep_BreedMode() {
}

void AJellyBreeder::OnJellyDestroyed(AActor* aActor) {
}


void AJellyBreeder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AJellyBreeder, IsInBreedMode);
}


