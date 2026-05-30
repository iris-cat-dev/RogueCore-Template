#include "MeshCarverComponent.h"

UMeshCarverComponent::UMeshCarverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TerrainMaterial = nullptr;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->ExpensiveNoise = 0.00f;
    this->CarverSize = CarveOptionsCellSize::CARVE_CELL_SIZE_100;
    this->PreciousMaterialAction = EPreciousMaterialOptions::TurnIntoGems;
}

void UMeshCarverComponent::Carve() {
}


