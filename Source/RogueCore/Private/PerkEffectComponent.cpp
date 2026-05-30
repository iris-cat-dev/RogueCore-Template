#include "PerkEffectComponent.h"

UPerkEffectComponent::UPerkEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloatValue = 0.00f;
    this->PlayerCharacter = nullptr;
}



