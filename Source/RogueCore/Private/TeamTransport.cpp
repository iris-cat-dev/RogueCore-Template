#include "TeamTransport.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ATeamTransport::ATeamTransport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->DropHeight = 3500.00f;
    this->DropCurve = nullptr;
    this->ArriveCurve = nullptr;
    this->DepartCurve = nullptr;
    this->DwarfCheckerBox = nullptr;
    this->DepartureTime = -1.00f;
    this->MissionType = EMiningPodMission::DropAndReturn;
    this->WaitForPlayerSpawns = true;
    this->RequireAllPlayersInTransport = false;
    this->HasLanded = false;
    this->PodOutline = nullptr;
    this->rampState = EMiningPodRampState::Closed;
    this->isEscapeTransport = false;
    this->TargetDropTime = 0.00f;
    this->TargetDepartureTime = 0.00f;
    this->TimeToDrop = 0.00f;
    this->ObjectivesManager = nullptr;
}

ATeamTransport* ATeamTransport::SpawnPodAtLocation(UObject* WorldContextObject, TSubclassOf<ATeamTransport> podClass, const FTransform& Transform, bool inIsEscapeTransport) {
    return NULL;
}

void ATeamTransport::SetTransportLocation(const FVector& InLocation) {
}

void ATeamTransport::SetRampState(EMiningPodRampState NewRampState) {
}




void ATeamTransport::PrepForTakeOff() {
}

void ATeamTransport::PowerUp() {
}

void ATeamTransport::PoweredUp() {
}

void ATeamTransport::OnRep_State(const FTeamTransportState& oldState) {
}










void ATeamTransport::OnCountdownFinished() {
}

void ATeamTransport::OnCountdownChanged(int32 NewTime) {
}



FVector ATeamTransport::GetTransportTargetLocation() const {
    return FVector{};
}

EMiningPodState ATeamTransport::GetTransportState() const {
    return EMiningPodState::Dropping;
}

FVector ATeamTransport::GetTransportStartLocation() const {
    return FVector{};
}

FVector ATeamTransport::GetTransportLocation() const {
    return FVector{};
}

int32 ATeamTransport::GetTimeToDeparture() const {
    return 0;
}

bool ATeamTransport::GetHasLanded() const {
    return false;
}


void ATeamTransport::ExitSpacerig() {
}

void ATeamTransport::DropToTarget(UObject* WorldContextObject, TSubclassOf<ATeamTransport> podClass, const FTransform& dropLocation, int32 DropDelay) {
}

ATeamTransport* ATeamTransport::DropToMission(UObject* WorldContextObject, TSubclassOf<ATeamTransport> podClass, const FVector& Location) {
    return NULL;
}

void ATeamTransport::DepositAllPlayersMaterials() {
}

void ATeamTransport::Depart() {
}

void ATeamTransport::CorrectLocationsForSpawnedOnLocation() {
}

FVector ATeamTransport::AdjustLandingLocationToGround(UObject* WorldContextObjet, const FVector& initialLocation, float maxDownAdjustment, bool canAdjustUpwards) {
    return FVector{};
}

void ATeamTransport::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATeamTransport, TransportState);
    DOREPLIFETIME(ATeamTransport, rampState);
    DOREPLIFETIME(ATeamTransport, isEscapeTransport);
}


