#include "DebrisStaticCarved.h"

UDebrisStaticCarved::UDebrisStaticCarved() {
    this->CarverType = EDebrisCarvedType::Large;
    this->TerrainMaterial = nullptr;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->CarveOffsetRadius = 0.00f;
    this->SpawnAttachClass = nullptr;
    this->AttachSpawnOffsetDistance = 0.00f;
}


