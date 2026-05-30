#include "CSGBuildOperationData.h"

FCSGBuildOperationData::FCSGBuildOperationData() {
    this->OperationNumber = 0;
    this->CSGModel = nullptr;
    this->CarverSettings = FCSGOptions();
    this->Transform = FMatrixWithExactSync();
}

