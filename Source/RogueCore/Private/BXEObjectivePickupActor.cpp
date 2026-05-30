#include "BXEObjectivePickupActor.h"

ABXEObjectivePickupActor::ABXEObjectivePickupActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScannerArea = nullptr;
    this->Objective = nullptr;
}

void ABXEObjectivePickupActor::RewardObtained() {
}


