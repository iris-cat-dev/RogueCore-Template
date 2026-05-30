#include "StageTemplate.h"

UStageTemplate::UStageTemplate() {
    this->StageIcon = nullptr;
    this->StageIconSmall = nullptr;
    this->StageTypeIndex = 0;
}

bool UStageTemplate::IsLocked(UFSDSaveGame* SaveGame) const {
    return false;
}

int32 UStageTemplate::GetStageTypeIndex() const {
    return 0;
}

UTexture2D* UStageTemplate::GetStageImageLarge() const {
    return NULL;
}

FObjectiveMissionIcon UStageTemplate::GetPrimaryObjectiveIconFromAsset(UStageTemplate* mission, bool getSmallVersion) {
    return FObjectiveMissionIcon{};
}

FObjectiveMissionIcon UStageTemplate::GetPrimaryObjectiveIcon(bool getSmallVersion) const {
    return FObjectiveMissionIcon{};
}


