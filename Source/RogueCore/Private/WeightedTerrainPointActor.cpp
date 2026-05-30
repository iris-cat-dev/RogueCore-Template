#include "WeightedTerrainPointActor.h"

FWeightedTerrainPointActor::FWeightedTerrainPointActor() {
    this->Weight = 0.00f;
    this->MaximumAmountToSpawn = 0;
    this->OnlySpawnOnLastStage = false;
    this->LoadedActorClass = nullptr;
    this->SpawnActor = nullptr;
    this->Selection = FStaticSpawnPointSelection();
}

