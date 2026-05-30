#include "LockedRoomActor.h"

ALockedRoomActor::ALockedRoomActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Objective = nullptr;
}

void ALockedRoomActor::SetObjective(UBXEBlueprintControlledObjective* InObjective) {
}


