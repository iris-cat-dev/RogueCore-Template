#include "MultiProjectileSpawnData.h"

FMultiProjectileSpawnData::FMultiProjectileSpawnData() {
    this->ProjectileClass = nullptr;
    this->IsBallistic = false;
    this->HorizontalOriginOffset = 0.00f;
    this->VerticalOriginOffset = 0.00f;
    this->HorizontalAngleOffset = FFloatInterval();
    this->VerticalAngleOffset = FFloatInterval();
    this->Delay = FFloatInterval();
}

