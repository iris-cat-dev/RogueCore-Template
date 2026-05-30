#include "PlanetShowroomStage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APlanetShowroomStage::APlanetShowroomStage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraZoomInPoint = CreateDefaultSubobject<USceneComponent>(TEXT("CameraZoomInPoint"));
    this->CameraZoomOutPoint = CreateDefaultSubobject<USceneComponent>(TEXT("CameraZoomOutPoint"));
    this->CameraZoomInPoint->SetupAttachment(CameraFocusPoint);
    this->CameraZoomOutPoint->SetupAttachment(CameraFocusPoint);
}


