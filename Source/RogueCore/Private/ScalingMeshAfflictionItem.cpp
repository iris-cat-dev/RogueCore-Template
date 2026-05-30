#include "ScalingMeshAfflictionItem.h"

FScalingMeshAfflictionItem::FScalingMeshAfflictionItem() {
    this->FrozenBitsSize = EFrozenBitsSize::Tiny;
    this->ChanceToSpawn = 0.00f;
    this->BoneName = FName();
    this->MeshScale = FRandRange();
}

