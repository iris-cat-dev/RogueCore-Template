#include "CollectableResourceData.h"

UCollectableResourceData::UCollectableResourceData() {
    this->ScaleToRoomResourceMultiplier = false;
    this->ResourceCreator = nullptr;
    this->Positioning = nullptr;
    this->Rarity = 0.00f;
    this->InfluenceRadius = 250.00f;
    this->UseTerrainPlacement = false;
}

float UCollectableResourceData::GetDesiredAmount(AProceduralSetup* pls) const {
    return 0.0f;
}


