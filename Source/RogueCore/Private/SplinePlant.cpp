#include "SplinePlant.h"
#include "Components/AudioComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"

ASplinePlant::ASplinePlant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->PlantSpline = CreateDefaultSubobject<USplineComponent>(TEXT("PlantSpline"));
    this->PlantEndPoint = CreateDefaultSubobject<USceneComponent>(TEXT("PlantEndPoint"));
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->AudioExtending = nullptr;
    this->AudioRetracting = nullptr;
    this->bEnabledSegmentCollision = false;
    this->CarveRadius = 60.00f;
    this->SegmentForwardAxis = ESplineMeshAxis::X;
    this->SegmentLength = 100.00f;
    this->SegmentWidthScale = 1.00f;
    this->SegmentHeightScale = 1.00f;
    this->PreviewLengthPercent = 1.00f;
    this->PreviewSeed = 0;
    this->SplineInstance = nullptr;
    this->SegmentMesh = nullptr;
    this->Seed = -1;
    this->AudioComponent->SetupAttachment(RootComponent);
    this->PlantSpline->SetupAttachment(RootComponent);
}

void ASplinePlant::SetTargetPlantLengthPercent(float InTargetPercent, float InPercentPerSecond, float InEaseExp) {
}

void ASplinePlant::SetTargetPlantLength(float InTargetLength, float InDistancePerSecond, float InEaseExp) {
}

void ASplinePlant::SetPlantLengthPercent(float InPercent) {
}

void ASplinePlant::ResetSpline() {
}

void ASplinePlant::ResetScale() {
}

void ASplinePlant::ReceivePrepareSpline_Implementation(USplineComponent* InSplineComponent, int32 InSeed) {
}




float ASplinePlant::GetPlantTargetLengthPercent() const {
    return 0.0f;
}

float ASplinePlant::GetPlantLengthPercent() const {
    return 0.0f;
}

FTransform ASplinePlant::GetNearestLocationToLocalPlayer() const {
    return FTransform{};
}

float ASplinePlant::GetFullPlantLength() const {
    return 0.0f;
}

void ASplinePlant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASplinePlant, Seed);
}


