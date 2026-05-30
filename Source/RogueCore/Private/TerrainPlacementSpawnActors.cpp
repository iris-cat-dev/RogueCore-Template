#include "TerrainPlacementSpawnActors.h"

FTerrainPlacementSpawnActors::FTerrainPlacementSpawnActors() {
    this->SpawnActorClass = nullptr;
    this->SpawnPositioning = nullptr;
    this->AmountToSpawn = 0;
    this->AmountToSpawnMinimum = 0;
    this->NumberOfAllowedChecks = 0;
    this->MinimumDistanceBetweenSpawns = 0.00f;
    this->AddTerrainPlacementBlockers = false;
}

