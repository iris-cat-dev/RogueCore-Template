#include "OpsComDeploymentSave.h"

FOpsComDeploymentSave::FOpsComDeploymentSave() {
    this->NumberOfUnlockedDeploymentSlots = 0;
    this->LastNewDeploymentGiven = FDateTime();
    this->LastDeploymentReroll = FDateTime();
}

