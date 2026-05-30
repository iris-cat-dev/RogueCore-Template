#include "IKControlCurveData.h"

FIKControlCurveData::FIKControlCurveData() {
    this->CorrectToTerrain = false;
    this->RayUpOffset = 0.00f;
    this->RayMaxDistance = 0.00f;
    this->UseExplicitBoneGroundOffset = false;
    this->ExplicitBoneGroundOffset = 0.00f;
    this->UseLimbLengthLimit = false;
    this->LimbLengthLimit = 0.00f;
    this->CurveName = FName();
    this->JointName = FName();
    this->LimitJointName = FName();
}

