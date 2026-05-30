#include "SplineSegmentCarveOperationData.h"

FSplineSegmentCarveOperationData::FSplineSegmentCarveOperationData() {
    this->OperationNumber = 0;
    this->Material = nullptr;
    this->CarveFilter = ECarveFilterType::ReplaceAll;
    this->Precious = EPreciousMaterialOptions::TurnIntoGems;
    this->Noise = 0.00f;
}

