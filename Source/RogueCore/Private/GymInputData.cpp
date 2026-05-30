#include "GymInputData.h"

FGymInputData::FGymInputData() {
    this->Action = EGymActions::Action1;
    this->Axis = 0;
    this->AxisThreshold = 0.00f;
    this->OverrideIcon1 = nullptr;
    this->LinkedAxisAction = EGymActions::Action1;
    this->LinkedAxis = 0;
    this->LinkedAxisThreshold = 0.00f;
    this->LinkedAxisOverrideIcon = nullptr;
    this->Key = FName();
}

