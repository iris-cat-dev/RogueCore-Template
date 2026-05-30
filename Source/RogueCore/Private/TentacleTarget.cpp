#include "TentacleTarget.h"

FTentacleTarget::FTentacleTarget() {
    this->MovementDuration = 0.00f;
    this->UseSpring = false;
    this->Location = FVector::ZeroVector;
    this->Rotation = FRotator::ZeroRotator;
}

