#include "DroneBase.h"
#include "Components/PointLightComponent.h"
#include "Net/UnrealNetwork.h"

ADroneBase::ADroneBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("StateLight"));
    this->DefaultState = EDroneState::EFollow;
    this->CurrentState = EDroneState::EFollow;
    this->StateLight->SetupAttachment(mesh);
}

void ADroneBase::OnRep_CurrentState(EDroneState Previous) {
}

void ADroneBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADroneBase, CurrentState);
}


