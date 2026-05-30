#include "GeneratorItemActor.h"
#include "Net/UnrealNetwork.h"

AGeneratorItemActor::AGeneratorItemActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GeneratorRadius = 5.00f;
    this->DeployDelay = 2.00f;
    this->bPushStatusEffectOnExit = false;
    this->GeneratorLifetime = 10.00f;
}

void AGeneratorItemActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGeneratorItemActor, GeneratorRadius);
    DOREPLIFETIME(AGeneratorItemActor, DeployDelay);
}


