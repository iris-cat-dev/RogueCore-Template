#include "PlacementDeviceActor.h"

APlacementDeviceActor::APlacementDeviceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultRadius = 1000.00f;
    this->RadiusStat = nullptr;
    this->DefaultLifetime = 10.00f;
    this->LifetimeStat = nullptr;
}


float APlacementDeviceActor::GetDeviceRadius() const {
    return 0.0f;
}

float APlacementDeviceActor::GetDeviceLifetime() const {
    return 0.0f;
}


