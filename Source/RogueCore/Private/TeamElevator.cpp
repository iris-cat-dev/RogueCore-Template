#include "TeamElevator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ATeamElevator::ATeamElevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElevatorCableInstance = nullptr;
    this->MovingPlatformRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MovingPlatformRoot"));
    this->GearsAnimInstance = nullptr;
    this->ElevatorCableClass = nullptr;
    this->NextStage = nullptr;
    this->NextStageNumber = 0;
    this->Type = ETeamElevatorType::Unknown;
    this->MovingPlatformRoot->SetupAttachment(RootComponent);
}

void ATeamElevator::SpawnSubElevatorCable(TSubclassOf<AGeneratorLine> InCableClass, const TArray<ATeamTransport*>& InTeamElevators, const TArray<FTransform>& InEnds) {
}

void ATeamElevator::SpawnElevatorCable(const FTransform& Start, const TArray<FTransform>& End) {
}

void ATeamElevator::Receive_SetIsMoving_Implementation(bool Moving) {
}



void ATeamElevator::InitializeNextLevel(const int32 NextStageIndex) {
}

ETeamElevatorType ATeamElevator::GetType() const {
    return ETeamElevatorType::Unknown;
}

UElevatorGearsAnimInstance* ATeamElevator::GetGearsAnimInstance_Implementation() const {
    return NULL;
}

AGeneratorLine* ATeamElevator::GetElevatorCableInstance() const {
    return NULL;
}

FVector ATeamElevator::GetBottomLocation_Implementation() const {
    return FVector{};
}

TArray<FTransform> ATeamElevator::GetAllElevatorCableStartPoints_Implementation() const {
    return TArray<FTransform>();
}

TArray<FTransform> ATeamElevator::GetAllElevatorCableEndPoints_Implementation() const {
    return TArray<FTransform>();
}

FTransform ATeamElevator::FindTeamElevatorSpawnTransform(AProceduralSetup* setup, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, bool AllowInvalidRoomsAsFallback, float blockDistFromLandingZone, const bool rotateFacingLastTunnel) {
    return FTransform{};
}

void ATeamElevator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATeamElevator, NextStageNumber);
    DOREPLIFETIME(ATeamElevator, NextLevelRiskVectors);
}


