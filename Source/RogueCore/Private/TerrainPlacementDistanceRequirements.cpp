#include "TerrainPlacementDistanceRequirements.h"

FTerrainPlacementDistanceRequirements::FTerrainPlacementDistanceRequirements() {
    this->RequireDistance = false;
    this->MinimumDistance = 0.00f;
    this->MaximumDistance = 0.00f;
    this->DistanceTo = FVector::ZeroVector;
}

