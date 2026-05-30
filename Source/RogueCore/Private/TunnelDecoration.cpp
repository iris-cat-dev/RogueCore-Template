#include "TunnelDecoration.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "DecorationSplineComponent.h"
#include "RoomSphereCollisionComponent.h"
#include "TerrainPlacementComponent.h"

ATunnelDecoration::ATunnelDecoration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->RoomSphereCollision = CreateDefaultSubobject<URoomSphereCollisionComponent>(TEXT("RoomSphereCollision"));
    this->TunnelReshapeSpline = CreateDefaultSubobject<UDecorationSplineComponent>(TEXT("StartLoc"));
    this->bShouldForceSpawn = false;
    this->TunnelReshapeSpline->SetupAttachment(RootComponent);
    this->terrainPlacement->SetupAttachment(RootComponent);
}


