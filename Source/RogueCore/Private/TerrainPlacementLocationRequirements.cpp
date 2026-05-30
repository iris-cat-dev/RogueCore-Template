#include "TerrainPlacementLocationRequirements.h"

FTerrainPlacementLocationRequirements::FTerrainPlacementLocationRequirements() {
    this->DistanceCostCurve = nullptr;
    this->AvoidImportantLocations = false;
    this->MinimumDistanceToImportantLocation = 0.00f;
}

