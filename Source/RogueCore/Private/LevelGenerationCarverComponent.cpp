#include "LevelGenerationCarverComponent.h"

ULevelGenerationCarverComponent::ULevelGenerationCarverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseCarveInPass = false;
    this->CarveInPass = EDebrisItemPass::PrePlacement;
    this->MeshCarver = nullptr;
    this->ConvexCarver = nullptr;
    this->StaticMeshCarver = nullptr;
    this->CSGCarver = nullptr;
    this->TerrainType = nullptr;
    this->TerrainMaterial = nullptr;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->ConvexExpensiveNoise = 0.00f;
    this->CarveCellSize = CarveOptionsCellSize::CARVE_CELL_SIZE_50;
    this->PreviewEnabled = true;
    this->CarvingDisabled = false;
    this->SelfActivate = false;
}

void ULevelGenerationCarverComponent::AddCarverComponentToProceduralSetup() {
}


