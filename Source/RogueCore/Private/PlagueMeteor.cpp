#include "PlagueMeteor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "DamageComponent.h"
#include "Net/UnrealNetwork.h"
#include "TerrainPlacementComponent.h"

APlagueMeteor::APlagueMeteor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->MeteorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeteorMesh"));
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->ImpactDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("ImpactDamgage"));
    this->ManuallyTargeted = false;
    this->CrackStage = 0;
    this->DropzoneIndicatorClass = nullptr;
    this->DropZoneIndicator = nullptr;
    this->Positioning = nullptr;
    this->IndicatorTime = 5.00f;
    this->VisualsTime = 10.00f;
    this->NearImpactTime = 0.00f;
    this->LastAudioTime = 0.00f;
    this->LocationVariance = 1000.00f;
    this->RockCrackerPod = nullptr;
    this->RockCrackerIndicator = nullptr;
    this->RockCrackerPodPositioning = nullptr;
    this->MeteorMesh->SetupAttachment(RootComponent);
    this->terrainPlacement->SetupAttachment(RootComponent);
}

void APlagueMeteor::SignalEventStarted() {
}

void APlagueMeteor::SignalEventEnded(bool wasSuccess) {
}

void APlagueMeteor::SetStage(int32 Stage) {
}

void APlagueMeteor::SetDropTarget(const FVector& Location) {
}

void APlagueMeteor::ResetStage() {
}

void APlagueMeteor::RegressStage() {
}


void APlagueMeteor::OnRep_DropInfo() {
}

void APlagueMeteor::OnRep_CrackStage() {
}





bool APlagueMeteor::HasLandedOnTopOfRefineryPipes(float minDistanceToPipes) const {
    return false;
}

TArray<ARockCrackerPod*> APlagueMeteor::GetPods() {
    return TArray<ARockCrackerPod*>();
}

ARockCrackerPod* APlagueMeteor::GetPodAtIndex(int32 Index) {
    return NULL;
}

int32 APlagueMeteor::GetNumActivePods() const {
    return 0;
}



void APlagueMeteor::DropRockCrackerPods(int32 Amount, float MinRadius, float maRadius, AProceduralSetup* setup) {
}


void APlagueMeteor::AdvanceStage() {
}

void APlagueMeteor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlagueMeteor, CrackStage);
    DOREPLIFETIME(APlagueMeteor, DropInfo);
    DOREPLIFETIME(APlagueMeteor, SpawnedPods);
}


