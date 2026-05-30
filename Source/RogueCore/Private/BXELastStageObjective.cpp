#include "BXELastStageObjective.h"

UBXELastStageObjective::UBXELastStageObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RiftPositioning = nullptr;
    this->spawnedRift = nullptr;
    this->DetonatorSpawnClass = nullptr;
    this->DetonatorPositioning = nullptr;
    this->ExplosiveLocationPositioning = nullptr;
    this->ExplosiveLocationCount = 2;
    this->MinDistanceBetweenExplosiveTargets = 3500.00f;
    this->MaxDistanceFromRiftToDetonator = 7500.00f;
    this->MinMaxDistanceToDetonator.AddDefaulted(2);
    this->SpawnedDetonator = nullptr;
}

void UBXELastStageObjective::OnWiresMerged() {
}

void UBXELastStageObjective::InitialGenerationDone() {
}


