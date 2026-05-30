#include "VeinResourceCreator.h"

UVeinResourceCreator::UVeinResourceCreator() {
    this->Resource = nullptr;
    this->Positioning = nullptr;
    this->CarveType = ECarveFilterType::ReplaceAll;
    this->SegmentMaxDot = 0.70f;
    this->VeinWorldHorizontalMaxDot = 1.00f;
    this->VeinWorldHorizontalMinDot = -1.00f;
    this->Noise = nullptr;
    this->Range = 65.00f;
    this->NoiseRange = 35.00f;
    this->InfluencerRange = 0.00f;
}


