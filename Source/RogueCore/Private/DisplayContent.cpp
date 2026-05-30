#include "DisplayContent.h"

FDisplayContent::FDisplayContent() {
    this->Idle = nullptr;
    this->React = nullptr;
    this->mesh = nullptr;
    this->PivotOffset = FVector::ZeroVector;
    this->RotationOffset = FRotator::ZeroRotator;
    this->Scale = FVector::ZeroVector;
}

