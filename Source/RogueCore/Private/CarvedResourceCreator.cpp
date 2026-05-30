#include "CarvedResourceCreator.h"

UCarvedResourceCreator::UCarvedResourceCreator() {
    this->Resource = nullptr;
    this->ScaleToResourceDistribution = true;
    this->Positioning = nullptr;
    this->ExpensiveNoise = 0.00f;
    this->CarveOffsetRadius = 0.00f;
    this->SpawnAttachClass = nullptr;
    this->AttachSpawnOffsetDistance = 0.00f;
    this->TerrainMaterial = nullptr;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->CarveCellSize = CarveOptionsCellSize::CARVE_CELL_SIZE_25;
}


