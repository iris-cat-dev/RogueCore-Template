#include "ShowroomStage.h"

#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneCaptureComponent2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AShowroomStage::AShowroomStage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneCapure = nullptr;
    this->ActiveCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
    this->ControllerClass = nullptr;
    this->ControllerInstance = nullptr;
    this->SceneCapture = (USceneCaptureComponent2D*)ActiveCaptureComponent;
    this->MinPitch = 0.00f;
    this->MaxPitch = 0.00f;
    this->MeshRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRootComponent"));
    this->CameraFocusPoint = CreateDefaultSubobject<USceneComponent>(TEXT("CameraFocusPoint"));
    this->ActiveCaptureComponent->SetupAttachment(CameraFocusPoint);
    this->CameraFocusPoint->SetupAttachment(RootComponent);
    this->MeshRootComponent->SetupAttachment(RootComponent);
    this->SceneCapture->SetupAttachment(CameraFocusPoint);
}


USceneCaptureComponent2D* AShowroomStage::GetActiveCaptureComponent() {
    return NULL;
}


