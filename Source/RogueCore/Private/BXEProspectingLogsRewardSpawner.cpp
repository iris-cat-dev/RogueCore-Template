#include "BXEProspectingLogsRewardSpawner.h"

ABXEProspectingLogsRewardSpawner::ABXEProspectingLogsRewardSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->terrainPlacement = nullptr;
    this->DebrisPositioning = nullptr;
    this->CostCurve = nullptr;
    this->DebrisPartsToSpawn = 1;
    this->MaxSpawnLocationTries = 10;
    this->RewardInstance = nullptr;
    this->Objective = nullptr;
}

void ABXEProspectingLogsRewardSpawner::SpawnRewardInstance() {
}


