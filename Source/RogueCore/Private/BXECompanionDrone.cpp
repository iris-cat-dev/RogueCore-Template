#include "BXECompanionDrone.h"
#include "Components/AudioComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"
#include "ResourceBank.h"
#include "Components/SplineComponent.h"

ABXECompanionDrone::ABXECompanionDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ArmSplineComponent"));
    this->MovementAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("MovementAudioComponent"));
    this->ArmExtensionNoise = CreateDefaultSubobject<UAudioComponent>(TEXT("ArmSound"));
    this->ResourceBank = CreateDefaultSubobject<UResourceBank>(TEXT("Resources"));
    this->CableHead = CreateDefaultSubobject<USceneComponent>(TEXT("CableHeadComponent"));
    this->CableHeadMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TentacleHeadMesh"));
    this->GrindingAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("GrindingAudioComponent"));
    this->HackingAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("HackingSound"));
    this->PlayerNegotiationSphere = nullptr;
    this->RewardCollectionTag = nullptr;
    this->ArtifactCollectionTag = nullptr;
    this->PotentExpeniteCollectionTag = nullptr;
    this->DestinationMarkerClass = nullptr;
    this->DestinationMarker = nullptr;
    this->TentacleHeadMesh = nullptr;
    this->SaluteAnim = nullptr;
    this->CallResponseCue = nullptr;
    this->CableConnectCue = nullptr;
    this->ArmSegment = nullptr;
    this->CableRange = 200.00f;
    this->CableExtensionTime = 2.00f;
    this->MaxArmLength = 4000.00f;
    this->ArmSegmentLength = 100.00f;
    this->ExtensionProgress = 0.00f;
    this->ExtensionTurnHeadTowardsTargetPercentage = 0.25f;
    this->SplineTangentPower = 300.00f;
    this->CallResponseTime = 7.00f;
    this->GrinderAcceleration = 1.00f;
    this->GrinderFadeTime = 0.10f;
    this->State = EBXECompanionDroneState::Following;
    this->TrayOpen = true;
    this->PrintAudioParams = false;
    this->BlockLevelUpWhileDispensing = true;
    this->BeingDepositedTo = false;
    this->ShoutUpgradesWaiting = nullptr;
    this->ShoutUpgradesLastActivation = nullptr;
    this->MinTimeBetweenConsecutiveShouts = 0.00f;
    this->TimeOfLastShout = 0.00f;
    this->ArmExtensionNoise->SetupAttachment(mesh);
    this->ArmSpline->SetupAttachment(mesh);
    this->CableHead->SetupAttachment(mesh);
    this->CableHeadMesh->SetupAttachment(mesh);
    this->GrindingAudio->SetupAttachment(mesh);
    this->HackingAudio->SetupAttachment(mesh);
    this->MovementAudio->SetupAttachment(mesh);
}

void ABXECompanionDrone::StartNegotiation() {
}

void ABXECompanionDrone::SetState(EBXECompanionDroneState NewState) {
}

void ABXECompanionDrone::SetPlayerNegotiationSphere(UPlayersNegotiationSphere* Sphere) {
}



void ABXECompanionDrone::OnResourceAdded(UCappedResource* Resource, float Amount) {
}

void ABXECompanionDrone::OnRep_TrayOpen() {
}

void ABXECompanionDrone::OnRep_State(EBXECompanionDroneState oldState) {
}

void ABXECompanionDrone::OnRep_DestinationLocation() {
}

void ABXECompanionDrone::OnRep_BeingDepositedTo() {
}

void ABXECompanionDrone::OnInsidePlayerChanged(int32 PlayerCount) {
}





EBXECompanionDroneState ABXECompanionDrone::GetState() const {
    return EBXECompanionDroneState::Following;
}

int32 ABXECompanionDrone::GetActiveButtonCount() const {
    return 0;
}

void ABXECompanionDrone::CoupleHologram(USingleUsableComponent* usable, UUserWidget* Widget) {
}

void ABXECompanionDrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABXECompanionDrone, ConnectorPoint);
    DOREPLIFETIME(ABXECompanionDrone, DestinationLocation);
    DOREPLIFETIME(ABXECompanionDrone, State);
    DOREPLIFETIME(ABXECompanionDrone, TrayOpen);
    DOREPLIFETIME(ABXECompanionDrone, BeingDepositedTo);
}


