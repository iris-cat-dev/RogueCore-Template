#include "StructureActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "TerrainPlacementComponent.h"

AStructureActor::AStructureActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->DebrisPositioning = nullptr;
    this->CostCurve = nullptr;
    this->TryTimes = 5;
    this->MinDistanceToTunnel = 1000.00f;
    this->SpawnNeutralInstigator = false;
    this->terrainPlacement->SetupAttachment(RootComponent);
}


