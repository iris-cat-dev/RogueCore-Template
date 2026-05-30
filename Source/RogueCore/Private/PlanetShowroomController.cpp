#include "PlanetShowroomController.h"

UPlanetShowroomController::UPlanetShowroomController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlanetInstance = nullptr;
    this->DragSmoothingSpeed = 2.00f;
    this->PointTargetSmoothingSpeed = 3.00f;
    this->AccumulatedDeltaPitch = 0.00f;
    this->AccumulatedDeltaYaw = 0.00f;
}

void UPlanetShowroomController::SetPlanetViewDepth(const ERunDepth Depth) {
}

void UPlanetShowroomController::SetMapSeed(const int32 Seed) {
}

TArray<FPlanetPointInfo> UPlanetShowroomController::ProjectPointsToScreen(const TArray<USceneComponent*>& Points, UCanvasPanelSlot* canvasSlot) const {
    return TArray<FPlanetPointInfo>();
}

void UPlanetShowroomController::LookAtScenePoint(const USceneComponent* Point) {
}

void UPlanetShowroomController::HighlightZoneUnderMouse(UCanvasPanelSlot* canvasSlot) {
}

TMap<UBiome*, FPlanetPointSetup> UPlanetShowroomController::GetShuffledPlanetPoints(const int32 Seed) const {
    return TMap<UBiome*, FPlanetPointSetup>();
}

UBiome* UPlanetShowroomController::GetHighlightedBiome() const {
    return NULL;
}

UPlanetShowroomController* UPlanetShowroomController::DisplayPlanet(UObject* WorldContextObject, TSoftClassPtr<APlanetShowroomItem> PlanetActor) {
    return NULL;
}


