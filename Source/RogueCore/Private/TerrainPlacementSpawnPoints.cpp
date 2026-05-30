#include "TerrainPlacementSpawnPoints.h"

FTerrainPlacementSpawnPoints::FTerrainPlacementSpawnPoints() {
    this->SpawnProbability = 0.00f;
    this->SpawnRadius = 0.00f;
    this->Selection = FStaticSpawnPointSelection();
    this->SpawnCenter = FVector::ZeroVector;
}

