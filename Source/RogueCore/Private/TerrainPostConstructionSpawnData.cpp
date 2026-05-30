#include "TerrainPostConstructionSpawnData.h"

UTerrainPostConstructionSpawnData::UTerrainPostConstructionSpawnData() {
    this->Positioning = nullptr;
    this->DistanceCostCurve = nullptr;
    this->MinDistanceToOtherLocations = 300.00f;
    this->MinDistanceToImportantLocations = 500.00f;
}


