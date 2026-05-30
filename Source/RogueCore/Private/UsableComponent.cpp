#include "UsableComponent.h"

UUsableComponent::UUsableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShoutBegin = nullptr;
    this->ResetOnFail = false;
    this->SwitchToUsingState = true;
}

void UUsableComponent::SetUseText(const FText& NewText) {
}

bool UUsableComponent::HasDuration() const {
    return false;
}


