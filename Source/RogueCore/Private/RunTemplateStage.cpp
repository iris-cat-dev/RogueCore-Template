#include "RunTemplateStage.h"

FRunTemplateStage::FRunTemplateStage() {
    this->Type = EStageType::Cave;
    this->StageDifficulty = nullptr;
    this->ObjectiveSettings = FRunTemplateObjectiveSettings();
    this->ObjectiveOverrides = FRunObjectiveOverrides();
    this->MutatorOverrides = FRunMutatorOverrides();
    this->StageSettings = FRunTemplateStageSettings();
    this->SafeRoomLevel = nullptr;
}

