#include "LockOnBeam.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SplineMeshComponent.h"

ALockOnBeam::ALockOnBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->BeamSpline = CreateDefaultSubobject<USplineComponent>(TEXT("BeamSpline"));
    this->BeamMeshComponent01 = CreateDefaultSubobject<USplineMeshComponent>(TEXT("BeamMeshComponent01"));
    this->BeamMeshComponent02 = CreateDefaultSubobject<USplineMeshComponent>(TEXT("BeamMeshComponent02"));
    this->BeamMeshComponent03 = CreateDefaultSubobject<USplineMeshComponent>(TEXT("BeamMeshComponent03"));
    this->BlockedNodeComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BlockedNodeComponent"));
    this->PreviewLocationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PreviewEndLocation"));
    this->BeamMaterial = nullptr;
    this->BlockedBeamMaterial = nullptr;
    this->SeekerMaterial = nullptr;
    this->BeamThicknessScale = 1.00f;
    this->BeamMeshComponent01->SetupAttachment(BeamSpline);
    this->BeamMeshComponent02->SetupAttachment(BeamSpline);
    this->BeamMeshComponent03->SetupAttachment(BeamSpline);
    this->BeamSpline->SetupAttachment(RootComponent);
    this->BlockedNodeComponent->SetupAttachment(BeamSpline);
    this->PreviewLocationComponent->SetupAttachment(RootComponent);
}



