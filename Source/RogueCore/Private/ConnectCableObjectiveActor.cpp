#include "ConnectCableObjectiveActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"
#include "SpawnActorWithDebrisPosComponent.h"

AConnectCableObjectiveActor::AConnectCableObjectiveActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->GeneratorActorToSpawn = nullptr;
    this->DebrisPositioning = nullptr;
    this->NumAllowedChecks = 30;
    this->GeneratorMinDistance = 1500.00f;
    this->GeneratorMaxDistance = 5000.00f;
    this->SocketActorToSpawnClass = nullptr;
    this->MaxFailedSpawns = 5;
    this->Root = (USceneComponent*)RootComponent;
    this->ChildActorContainer = CreateDefaultSubobject<USceneComponent>(TEXT("ChildActorContainer"));
    this->GeneratorSpawnCenter = CreateDefaultSubobject<USceneComponent>(TEXT("GeneratorSpawnCenter"));
    this->DebrisSpawner = CreateDefaultSubobject<USpawnActorWithDebrisPosComponent>(TEXT("DebrisSpawnerComponent"));
    this->ObjectiveCompleted = false;
    this->ChildActorContainer->SetupAttachment(RootComponent);
    this->GeneratorSpawnCenter->SetupAttachment(RootComponent);
}


void AConnectCableObjectiveActor::OnRep_ObjectiveCompleted() {
}


void AConnectCableObjectiveActor::OnMatchStarted() {
}


void AConnectCableObjectiveActor::OnGeneratorSpawnTimer() {
}

void AConnectCableObjectiveActor::OnConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment) {
}

void AConnectCableObjectiveActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConnectCableObjectiveActor, ObjectiveCompleted);
}


