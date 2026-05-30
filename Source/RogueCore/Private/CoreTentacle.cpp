#include "CoreTentacle.h"
#include "Net/UnrealNetwork.h"

ACoreTentacle::ACoreTentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TentacleState = ECoreTentacleState::Idle;
}

void ACoreTentacle::SetTentacleState(const ECoreTentacleState NewState) {
}

void ACoreTentacle::SetSwayTarget(const FCoreTentacleSwayTarget& Target, const bool SwayImmediately) {
}

void ACoreTentacle::SetMovementTarget(const FCoreTentacleMovementTarget& Target) {
}

void ACoreTentacle::ReleasedActor(AActor* Actor, bool FullGrabElasped) {
}

void ACoreTentacle::ReleaseBind() {
}

void ACoreTentacle::OnRep_MovementTarget() {
}

void ACoreTentacle::GrabbedActor(AActor* Actor) {
}

ECoreTentacleState ACoreTentacle::GetTentacleState() const {
    return ECoreTentacleState::Idle;
}

FCoreTentacleMovementTarget ACoreTentacle::GetMovementTarget() const {
    return FCoreTentacleMovementTarget{};
}

bool ACoreTentacle::FindBurrowEntrancePoint(UDebrisPositioning* Debris, const FVector& AroundPoint, float SearchRadius, float BurrowDepth, FVector& OutLocation) const {
    return false;
}

void ACoreTentacle::Client_ReleaseBind_Implementation() {
}

void ACoreTentacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACoreTentacle, MovementTarget);
    DOREPLIFETIME(ACoreTentacle, TentacleState);
}


