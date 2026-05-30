#include "TerrainPlacementDebugGroup.h"

FTerrainPlacementDebugGroup::FTerrainPlacementDebugGroup() {
    this->CapsuleType = EDebrisColliderType::Object;
    this->Good = 0;
    this->Bad = 0;
    this->Name = FString();
}

