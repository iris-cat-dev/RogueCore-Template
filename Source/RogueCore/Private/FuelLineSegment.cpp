#include "FuelLineSegment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "SimpleHealthComponent.h"

AFuelLineSegment::AFuelLineSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FuelLineSplineMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("FuelLineSplineMesh"));
    this->FuelLineSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("FuelLineSplineComponent"));
    this->FuelLineEndPostMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FuelLineEndPostMesh"));
    this->DeconstructHealthComponent = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("DeconstructHealthComponent"));
    this->PreviewEndPostLocation = CreateDefaultSubobject<USceneComponent>(TEXT("PreviewEndPostLocation"));
    this->EndPostHeightOffset = 0.00f;
    this->MaxLength = 500.00f;
    this->bHasMaxTurnAngle = false;
    this->MaxTurnAngle = 0.00f;
    this->bHaveFlowingLiquid = false;
    this->FuelLineEndPostMesh->SetupAttachment(RootComponent);
    this->FuelLineSplineComponent->SetupAttachment(RootComponent);
    this->FuelLineSplineMesh->SetupAttachment(RootComponent);
    this->PreviewEndPostLocation->SetupAttachment(RootComponent);
}

void AFuelLineSegment::SetHaveFlowingLiquid(const bool NewHaveFlowingLiquid) {
}

void AFuelLineSegment::PropagateFlowingLiquid(const bool NewHaveFlowingLiquid) {
}


bool AFuelLineSegment::HaveFlowingLiquid() const {
    return false;
}

void AFuelLineSegment::ClientUpdateStartTransform_Implementation(const FVector& NewStartLocation) {
}

void AFuelLineSegment::ChangeStartTransform(const FTransform& ChangedStartLocation) {
}

void AFuelLineSegment::CallbackOnDeath(UHealthComponentBase* InHealthComponent) {
}

void AFuelLineSegment::CallbackCanStartNextSegmentChanged(bool InCanStart) {
}


