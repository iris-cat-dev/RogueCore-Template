#include "DebrisActorComponent.h"

UDebrisActorComponent::UDebrisActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->Enabled = true;
    this->Solo = false;
}


