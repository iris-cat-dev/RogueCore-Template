#include "ElementEventComponent.h"

UElementEventComponent::UElementEventComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventType = nullptr;
    this->TriggeredByElementType = nullptr;
    this->Source = nullptr;
}

bool UElementEventComponent::FindEventState(FElementEventState& EventState) {
    return false;
}


