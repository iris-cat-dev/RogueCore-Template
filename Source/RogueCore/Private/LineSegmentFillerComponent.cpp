#include "LineSegmentFillerComponent.h"

ULineSegmentFillerComponent::ULineSegmentFillerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LinePoints.AddDefaulted(2);
    this->visible = true;
    this->NoiseOverride = nullptr;
}


