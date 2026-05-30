#include "InterpolatedCursorPosition.h"

FInterpolatedCursorPosition::FInterpolatedCursorPosition() {
    this->Timestamp = 0.00f;
    this->PrevCursorPositon = FVector2D::ZeroVector;
    this->CurrentCursorPositon = FVector2D::ZeroVector;
}

