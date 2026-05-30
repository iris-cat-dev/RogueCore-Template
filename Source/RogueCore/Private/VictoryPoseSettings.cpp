#include "VictoryPoseSettings.h"

UVictoryPoseSettings::UVictoryPoseSettings() {
    this->GenericVictoryPoseIcon = nullptr;
    this->RandomVictoryPose = nullptr;
}

TArray<UVictoryPose*> UVictoryPoseSettings::GetVictoryPoses() const {
    return TArray<UVictoryPose*>();
}


