#include "RunBranchStage.h"

FRunBranchStage::FRunBranchStage() {
    this->Type = EStageType::Cave;
    this->Biome = nullptr;
    this->StageBranchLevel = 0;
    this->StageIndex = 0;
    this->IsDiscovered = false;
}

