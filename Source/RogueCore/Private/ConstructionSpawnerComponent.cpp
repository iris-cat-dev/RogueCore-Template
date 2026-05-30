#include "ConstructionSpawnerComponent.h"

UConstructionSpawnerComponent::UConstructionSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostConstructionSpawnDataAsset = nullptr;
    this->LogSpawning = true;
    this->PrintSpawning = true;
}

void UConstructionSpawnerComponent::AddConstructionGroupToRoom(int32 InRoomID, FConstructionGenerationGroup InGroup) {
}


