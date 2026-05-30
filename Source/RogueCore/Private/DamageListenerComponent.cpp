#include "DamageListenerComponent.h"

UDamageListenerComponent::UDamageListenerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageListenerProfile = 0;
    this->TriggerBlueprintEvents = false;
}


