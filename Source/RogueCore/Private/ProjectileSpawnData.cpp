#include "ProjectileSpawnData.h"

FProjectileSpawnData::FProjectileSpawnData() {
    this->ProjectileClass = nullptr;
    this->IsBallistic = false;
    this->HorizontalAngleOffset = FFloatInterval();
    this->VerticalAngleOffset = FFloatInterval();
    this->Delay = FFloatInterval();
}

