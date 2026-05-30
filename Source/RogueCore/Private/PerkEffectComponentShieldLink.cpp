#include "PerkEffectComponentShieldLink.h"

UPerkEffectComponentShieldLink::UPerkEffectComponentShieldLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoostedStatusEffect = nullptr;
    this->BoostedStatusEffectInstance = nullptr;
    this->LinkDistance = 300.00f;
    this->LinkStatusEffect = nullptr;
}

void UPerkEffectComponentShieldLink::TimerFunction() {
}


