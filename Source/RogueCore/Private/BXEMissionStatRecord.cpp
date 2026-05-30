#include "BXEMissionStatRecord.h"

FBXEMissionStatRecord::FBXEMissionStatRecord() {
    this->count = 0;
    this->MissionStatID = FGuid();
    this->RunId = FGuid();
    this->WeaponID = FGuid();
}

