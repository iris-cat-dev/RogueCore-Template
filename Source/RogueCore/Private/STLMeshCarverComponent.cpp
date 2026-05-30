#include "STLMeshCarverComponent.h"

USTLMeshCarverComponent::USTLMeshCarverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->TerrainMaterial = nullptr;
    this->MeshCarver = nullptr;
    this->Filter = ECarveFilterType::ReplaceAll;
    this->PreviewEnabled = true;
    this->PreciousMaterialAction = EPreciousMaterialOptions::TurnIntoGems;
}


