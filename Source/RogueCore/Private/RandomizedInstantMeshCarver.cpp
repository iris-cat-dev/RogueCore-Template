#include "RandomizedInstantMeshCarver.h"

ARandomizedInstantMeshCarver::ARandomizedInstantMeshCarver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TerrainMaterial = nullptr;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->PreciousMaterialAction = EPreciousMaterialOptions::TurnIntoGems;
}


