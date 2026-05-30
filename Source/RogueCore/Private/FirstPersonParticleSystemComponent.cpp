#include "FirstPersonParticleSystemComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFirstPersonPrimitiveType -FallbackName=EFirstPersonPrimitiveType

UFirstPersonParticleSystemComponent::UFirstPersonParticleSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::FirstPerson;
}

UParticleSystemComponent* UFirstPersonParticleSystemComponent::SpawnFirstPersonEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy) {
    return NULL;
}


