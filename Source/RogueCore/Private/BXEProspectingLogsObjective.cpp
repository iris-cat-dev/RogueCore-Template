#include "BXEProspectingLogsObjective.h"
#include "Net/UnrealNetwork.h"

UBXEProspectingLogsObjective::UBXEProspectingLogsObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnedReward = nullptr;
    this->RewardSpawner = nullptr;
    this->NumToSpawn = 5;
    this->HasPickedUp = 0;
}

void UBXEProspectingLogsObjective::OnRewardSpawned() {
}

void UBXEProspectingLogsObjective::OnRep_HasPickedUp() {
}

void UBXEProspectingLogsObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBXEProspectingLogsObjective, SpawnedReward);
    DOREPLIFETIME(UBXEProspectingLogsObjective, HasPickedUp);
}


