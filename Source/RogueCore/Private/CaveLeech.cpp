#include "CaveLeech.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "GrabberComponent.h"
#include "Net/UnrealNetwork.h"

ACaveLeech::ACaveLeech(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NewMesh"));
    this->GrabberComponent = CreateDefaultSubobject<UGrabberComponent>(TEXT("Grabber"));
    this->BitesPerSecond = 1.00f;
    this->MaxDistanceXY = 300.00f;
    this->GrapDistance = 100.00f;
    this->GrapDelay = 1.00f;
    this->TentacleSpeed = 100.00f;
    this->TentacleRetractSpeed = 120.00f;
    this->RetractDuration = 0.50f;
    this->TentaclePullSpeed = 250.00f;
    this->TentacleDropPlayerSpeed = 500.00f;
    this->TentacleDropGroundDistance = 200.00f;
    this->MaxDropPlayerDuration = 2.00f;
    this->HeadInterpSpeed = 0.50f;
    this->TentacleAttachOffset = 40.00f;
    this->BiteDistance = 100.00f;
    this->RevivedGracePeriod = 10.00f;
    this->CaveLeechSenseAffliction = nullptr;
    this->StateTime = 0.00f;
    this->State = ECaveLeechState::Idle;
    this->HealthTarget = nullptr;
    this->TentacleHead = CreateDefaultSubobject<USceneComponent>(TEXT("TentacleHead"));
    this->SkeletalMesh->SetupAttachment(RootComponent);
}

void ACaveLeech::UnImmobilize() {
}

void ACaveLeech::ReleaseBind() {
}

void ACaveLeech::OnRep_State() {
}

void ACaveLeech::Immobilize() {
}

FVector ACaveLeech::GetTentacleTargetLocation() const {
    return FVector{};
}

FVector ACaveLeech::GetMouthLocation_Implementation() const {
    return FVector{};
}

AActor* ACaveLeech::GetCurrentTarget() {
    return NULL;
}

void ACaveLeech::Died(UHealthComponentBase* HealthComponent) {
}

void ACaveLeech::Damaged(float Amount) {
}

void ACaveLeech::Client_ReleaseBind_Implementation() {
}



void ACaveLeech::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACaveLeech, State);
    DOREPLIFETIME(ACaveLeech, TentacleLocation);
    DOREPLIFETIME(ACaveLeech, TentacleVelocity);
    DOREPLIFETIME(ACaveLeech, Target);
}


