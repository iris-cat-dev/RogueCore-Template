#include "TerrainMaterialCore.h"

UTerrainMaterialCore::UTerrainMaterialCore() {
    this->BurntMaterial = nullptr;
    this->BulletBurntMaterial = nullptr;
    this->PathfinderDanger = false;
    this->PathfinderPreventSpawning = false;
    this->ScannerMaterial = nullptr;
    this->NumDynamicRenderMaterialInstances = 0;
    this->InstancingDuration = 5.00f;
    this->LastDynamicIndex = 0;
}


