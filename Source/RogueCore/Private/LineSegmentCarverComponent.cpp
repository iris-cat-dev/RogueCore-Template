#include "LineSegmentCarverComponent.h"

ULineSegmentCarverComponent::ULineSegmentCarverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LinePoints.AddDefaulted(2);
    this->visible = true;
    this->Layer = 0;
    this->Cielingheight = 10000.00f;
    this->FloorDepth = 0.00f;
    this->CeilingNoiseOverride = nullptr;
    this->WallNoiseOverride = nullptr;
    this->FloorNoiseOverride = nullptr;
    this->UseDetailNoise = true;
}


