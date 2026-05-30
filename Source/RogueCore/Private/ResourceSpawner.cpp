#include "ResourceSpawner.h"

FResourceSpawner::FResourceSpawner() {
    this->Resource = nullptr;
    this->SpawnChanceMutator = nullptr;
    this->AmountToSpawn = FRandFloatInterval();
}

