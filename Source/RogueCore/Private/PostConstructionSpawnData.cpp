#include "PostConstructionSpawnData.h"

UPostConstructionSpawnData::UPostConstructionSpawnData() {
    this->SpawnAmount = 1;
    this->SpawnChance = 1.00f;
    this->SpawnChanceMutator = nullptr;
    this->OnlySpawnOnFirstStage = false;
    this->OnlySpawnOnLastStage = false;
    this->MaxDistanceToCustomActor = -1.00f;
}


