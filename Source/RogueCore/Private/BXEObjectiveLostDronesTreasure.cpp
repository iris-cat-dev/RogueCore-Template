#include "BXEObjectiveLostDronesTreasure.h"
#include "Net/UnrealNetwork.h"

UBXEObjectiveLostDronesTreasure::UBXEObjectiveLostDronesTreasure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bObjectiveCompleted = false;
    this->EnemyCount = 0;
    this->ExtraEnemies = 0;
    this->Positioning = nullptr;
    this->EnemyTarget = nullptr;
    this->PreferredMinDistanceBetweenSpawns = 500;
    this->EnemiesKilled = 0;
    this->EnemiesToKill = 0;
    this->SpawnedReward = nullptr;
    this->RewardSpawner = nullptr;
    this->NumToSpawn = 1;
    this->HasPickedUp = 0;
}

void UBXEObjectiveLostDronesTreasure::SetObjectiveCompleted() {
}

void UBXEObjectiveLostDronesTreasure::RegisterTargetSpawned(APawn* Target) const {
}

void UBXEObjectiveLostDronesTreasure::OnTargetKilled(AActor* Actor) {
}

void UBXEObjectiveLostDronesTreasure::OnRewardSpawned() {
}

void UBXEObjectiveLostDronesTreasure::OnRep_ObjectiveCompleted() {
}

void UBXEObjectiveLostDronesTreasure::OnRep_HasPickedUp() {
}

void UBXEObjectiveLostDronesTreasure::OnRep_EnemiesToKill(int32 prevAmount) {
}

void UBXEObjectiveLostDronesTreasure::OnRep_EnemiesKilled(int32 prevAmount) {
}

void UBXEObjectiveLostDronesTreasure::AddPickUp() {
}

void UBXEObjectiveLostDronesTreasure::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBXEObjectiveLostDronesTreasure, bObjectiveCompleted);
    DOREPLIFETIME(UBXEObjectiveLostDronesTreasure, EnemiesKilled);
    DOREPLIFETIME(UBXEObjectiveLostDronesTreasure, EnemiesToKill);
    DOREPLIFETIME(UBXEObjectiveLostDronesTreasure, SpawnedReward);
    DOREPLIFETIME(UBXEObjectiveLostDronesTreasure, HasPickedUp);
}


