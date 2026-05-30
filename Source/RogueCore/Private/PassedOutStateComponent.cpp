#include "PassedOutStateComponent.h"

UPassedOutStateComponent::UPassedOutStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 11;
    this->ReviveShout = nullptr;
    this->bAllPlayersPassedOut = false;
}



