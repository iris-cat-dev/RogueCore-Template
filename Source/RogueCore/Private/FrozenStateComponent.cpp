#include "FrozenStateComponent.h"

UFrozenStateComponent::UFrozenStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 10;
    this->SlowAnimationSpeed = 2.00f;
    this->HoldToBreakTime = 0.25f;
    this->ElementType = nullptr;
    this->ElementEventTrigger = nullptr;
}

void UFrozenStateComponent::Server_ThawPlayer_Implementation() {
}



