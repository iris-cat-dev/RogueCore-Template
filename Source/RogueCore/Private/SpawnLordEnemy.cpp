#include "SpawnLordEnemy.h"
#include "DestructibleSubHealthComponent.h"
#include "Net/UnrealNetwork.h"

ASpawnLordEnemy::ASpawnLordEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestructibleSubHealthHead = CreateDefaultSubobject<UDestructibleSubHealthComponent>(TEXT("DestructibleSubHealthHead"));
    this->AdED = nullptr;
    this->HealingStateTime = 20.00f;
    this->SpawnLordState = ESpawnLordState::Idle;
    this->HasBossfightStarted = false;
}

void ASpawnLordEnemy::OnSubHealthDestroyed(UDestructibleSubHealthComponent* subHealth) {
}

void ASpawnLordEnemy::OnSeePawn(APawn* aPawn) {
}

void ASpawnLordEnemy::OnRep_SpawnLordState() {
}

void ASpawnLordEnemy::OnRep_HasBossfightStarted() {
}

void ASpawnLordEnemy::OnInitialGenerationDone() {
}

void ASpawnLordEnemy::DamageStateTimer(float damageInSeconds) {
}

void ASpawnLordEnemy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpawnLordEnemy, SpawnLordState);
    DOREPLIFETIME(ASpawnLordEnemy, HasBossfightStarted);
}


