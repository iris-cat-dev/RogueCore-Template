#include "TerrainPlacementBox.h"

FTerrainPlacementBox::FTerrainPlacementBox() {
    this->PlacementType = ETerrainPlacementBoxType::NoTerrain;
    this->min = FVector::ZeroVector;
    this->max = FVector::ZeroVector;
}

