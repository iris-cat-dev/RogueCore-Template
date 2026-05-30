#include "FakePhysicsMover.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"

AFakePhysicsMover::AFakePhysicsMover(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->MoveSettings = nullptr;
    this->SyncTime = 0.00f;
}

void AFakePhysicsMover::Teleport(const FVector& Pos, const FVector& Vel) {
}

void AFakePhysicsMover::OnRep_PosVel(const FFakeMoveState& NewPosVel) {
}

void AFakePhysicsMover::OnRep_MoveSettings(const UFakeMoverSettings* NewMoveSettings) {
}

void AFakePhysicsMover::ApplyImpulse(const FVector& Impulse) {
}

void AFakePhysicsMover::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFakePhysicsMover, PosVel);
    DOREPLIFETIME(AFakePhysicsMover, MoveSettings);
}


