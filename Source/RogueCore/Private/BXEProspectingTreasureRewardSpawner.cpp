#include "BXEProspectingTreasureRewardSpawner.h"

ABXEProspectingTreasureRewardSpawner::ABXEProspectingTreasureRewardSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->terrainPlacement = nullptr;
    this->RewardClass = nullptr;
    this->DebrisPositioning = nullptr;
    this->CostCurve = nullptr;
    this->DebrisPartsToSpawn = 1;
    this->MaxSpawnLocationTries = 10;
    this->RewardInstance = nullptr;
    this->Objective = nullptr;
}

void ABXEProspectingTreasureRewardSpawner::SpawnRewardInstance() {
}


