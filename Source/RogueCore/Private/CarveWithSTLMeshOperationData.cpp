#include "CarveWithSTLMeshOperationData.h"

FCarveWithSTLMeshOperationData::FCarveWithSTLMeshOperationData() {
    this->OperationNumber = 0;
    this->STLMeshCarver = nullptr;
    this->StaticMeshCarver = nullptr;
    this->Material = nullptr;
    this->CarveFilter = ECarveFilterType::ReplaceAll;
    this->Precious = EPreciousMaterialOptions::TurnIntoGems;
    this->Transform = FMatrixWithExactSync();
}

