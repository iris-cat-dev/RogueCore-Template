#include "TerrainPlacementPathRequirements.h"

FTerrainPlacementPathRequirements::FTerrainPlacementPathRequirements() {
    this->RequirePath = false;
    this->MinimumDistance = 0.00f;
    this->MaximumDistance = 0.00f;
    this->RequirePathTo = FVector::ZeroVector;
}

