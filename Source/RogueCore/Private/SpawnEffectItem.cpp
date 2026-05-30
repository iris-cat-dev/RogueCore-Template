#include "SpawnEffectItem.h"

FSpawnEffectItem::FSpawnEffectItem() {
    this->CreatureSize = ECreatureSize::Tiny;
    this->EndTime = 0.00f;
    this->Location = FVector::ZeroVector;
    this->CompressedRotation = FVector::ZeroVector;
}

