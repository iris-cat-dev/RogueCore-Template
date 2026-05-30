#include "FirstPersonNiagaraComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFirstPersonPrimitiveType -FallbackName=EFirstPersonPrimitiveType

UFirstPersonNiagaraComponent::UFirstPersonNiagaraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::FirstPerson;
}

UNiagaraComponent* UFirstPersonNiagaraComponent::SpawnFirstPersonEmitterAttached(UNiagaraSystem* inNiagaraSystem, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool inAutoDestroy) {
    return NULL;
}


