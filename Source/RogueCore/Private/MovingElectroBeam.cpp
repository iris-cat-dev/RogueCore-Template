#include "MovingElectroBeam.h"
#include "Net/UnrealNetwork.h"

AMovingElectroBeam::AMovingElectroBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Source = nullptr;
    this->Target = nullptr;
    this->Range = 0.00f;
    this->UpdateRate = 0.04f;
}

void AMovingElectroBeam::SetTargetActor(AActor* InTarget) {
}

void AMovingElectroBeam::SetSourceActor(AActor* InSource) {
}

void AMovingElectroBeam::RecalculateMovingBeam() {
}

void AMovingElectroBeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMovingElectroBeam, Source);
    DOREPLIFETIME(AMovingElectroBeam, Target);
}


