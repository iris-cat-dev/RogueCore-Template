#include "LineSegmentFillerPoint.h"

FLineSegmentFillerPoint::FLineSegmentFillerPoint() {
    this->position = FVector::ZeroVector;
    this->RandomRange = FRandRange();
    this->RandomNoiseRange = FRandRange();
    this->FillAmount = FRandRange();
}

