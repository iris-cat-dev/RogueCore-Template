#include "BXEObjectiveDebrisItemComponent.h"

UBXEObjectiveDebrisItemComponent::UBXEObjectiveDebrisItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->objectiveClass = nullptr;
    this->OnlySpawnInLastRoom = false;
}


