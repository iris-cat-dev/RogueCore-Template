#include "BXEProspectingRewardActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "TerrainPlacementComponent.h"
#include "TerrainScannerStaticMesh.h"

ABXEProspectingRewardActor::ABXEProspectingRewardActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ScannerArea = CreateDefaultSubobject<UTerrainScannerStaticMesh>(TEXT("ScannerArea"));
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->Root = (USceneComponent*)RootComponent;
    this->Objective = nullptr;
    this->maxOffset = 10.00f;
    this->ScannerArea->SetupAttachment(RootComponent);
    this->terrainPlacement->SetupAttachment(RootComponent);
}


