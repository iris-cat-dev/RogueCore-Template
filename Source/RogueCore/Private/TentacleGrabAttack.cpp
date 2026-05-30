#include "TentacleGrabAttack.h"

UTentacleGrabAttack::UTentacleGrabAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeadMesh = nullptr;
}

bool UTentacleGrabAttack::IsHeadNearTerrain() const {
    return false;
}


