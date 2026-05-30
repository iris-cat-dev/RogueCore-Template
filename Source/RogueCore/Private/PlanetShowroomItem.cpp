#include "PlanetShowroomItem.h"

APlanetShowroomItem::APlanetShowroomItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoHoverMaterial = nullptr;
    this->HoverMaterial = nullptr;
    this->NoHoverWhenLockedMaterial = nullptr;
    this->HoverWhenLockedMaterial = nullptr;
    this->NoHoverWhenUnavailableMaterial = nullptr;
    this->HoverWhenUnavailableMaterial = nullptr;
    this->PlanetMeshComp = nullptr;
    this->SelectedDeptht = ERunDepth::Depth1;
}

void APlanetShowroomItem::UpdateMaterialParameters(ERunDepth Depth) {
}



void APlanetShowroomItem::SetupPlanetPoints(TArray<FPlanetPointSetup> InPoints) {
}

void APlanetShowroomItem::SetPlanetViewDepth_Implementation(const ERunDepth Depth) {
}

void APlanetShowroomItem::SetHoveredBiome(FPlanetPointSetup Point) {
}




