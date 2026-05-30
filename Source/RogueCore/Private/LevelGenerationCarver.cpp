#include "LevelGenerationCarver.h"

FLevelGenerationCarver::FLevelGenerationCarver() {
    this->MeshCarver = nullptr;
    this->ConvexCarver = nullptr;
    this->StaticMeshCarver = nullptr;
    this->CSGCarver = nullptr;
    this->ConvexExpensiveNoise = 0.00f;
    this->CarveCellSize = CarveOptionsCellSize::CARVE_CELL_SIZE_25;
    this->TerrainMaterial = nullptr;
    this->Type = ELevelCarverType::None;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->CarvePass = EDebrisItemPass::PrePlacement;
    this->UseCarvePass = false;
    this->ToBeDiscarded = false;
    this->Transform = FMatrixWithExactSync();
    this->CSGCarverSettings = FCSGOptions();
}

