#include "BlitzMovementState.h"

FBlitzMovementState::FBlitzMovementState() {
    this->IsBlitzing = false;
    this->TargetPoint = FVector::ZeroVector;
    this->StoppingPoint = FVector::ZeroVector;
}

