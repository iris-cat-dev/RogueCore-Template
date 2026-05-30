#include "EscortHammerObjectiveActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"
#include "PathfinderCollisionComponent.h"

AEscortHammerObjectiveActor::AEscortHammerObjectiveActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->HammerRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HammerRoot"));
    this->HammerMovementRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HammerMovementRoot"));
    this->HammerLocationStart = CreateDefaultSubobject<USceneComponent>(TEXT("HammerLocationStart"));
    this->HammerLocationEnd = CreateDefaultSubobject<USceneComponent>(TEXT("HammerLocationEnd"));
    this->HammerPathfinderCollisionRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HammerPathfinderCollisionRoot"));
    this->HammerPathfinderCollision = CreateDefaultSubobject<UPathfinderCollisionComponent>(TEXT("HammerPathfinderCollision"));
    this->State = EEscortHammeState::Intital;
    this->HammerLocationEnd->SetupAttachment(HammerRoot);
    this->HammerLocationStart->SetupAttachment(HammerRoot);
    this->HammerMovementRoot->SetupAttachment(HammerRoot);
    this->HammerPathfinderCollision->SetupAttachment(HammerPathfinderCollisionRoot);
    this->HammerPathfinderCollisionRoot->SetupAttachment(HammerMovementRoot);
    this->HammerRoot->SetupAttachment(RootComponent);
}

void AEscortHammerObjectiveActor::SetHammerTargetVelocityMultiplier(float TargetVelocityMultiplier) {
}



void AEscortHammerObjectiveActor::OnRep_State(EEscortHammeState prevState) {
}

void AEscortHammerObjectiveActor::OnRep_MovementState() {
}


void AEscortHammerObjectiveActor::AdvanceState() {
}

void AEscortHammerObjectiveActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEscortHammerObjectiveActor, State);
    DOREPLIFETIME(AEscortHammerObjectiveActor, MovementState);
    DOREPLIFETIME(AEscortHammerObjectiveActor, LocalMovementState);
}


