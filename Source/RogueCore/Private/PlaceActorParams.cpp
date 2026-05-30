#include "PlaceActorParams.h"

FPlaceActorParams::FPlaceActorParams() {
    this->NumToSpawn = 0;
    this->NumToSpawnMin = 0;
    this->NumAllowedChecks = 0;
    this->SpawnedActorClass = nullptr;
    this->setup = nullptr;
    this->DebrisPositioning = nullptr;
    this->AvoidCostCurve = nullptr;
    this->ChanceToUseStaticSpawnPoints = 0.00f;
    this->DistanceParams = FDistanceParam();
    this->RoomFilterParams = FRoomFilterParams();
    this->StaticSpawnPointSelection = FStaticSpawnPointSelection();
}

