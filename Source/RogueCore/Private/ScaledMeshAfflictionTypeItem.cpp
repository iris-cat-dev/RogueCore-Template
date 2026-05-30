#include "ScaledMeshAfflictionTypeItem.h"

FScaledMeshAfflictionTypeItem::FScaledMeshAfflictionTypeItem() {
    this->ScaleDelay = FRandRange();
    this->StartingSound = nullptr;
    this->EndSound = nullptr;
}

