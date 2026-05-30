#include "RunTemplate.h"

URunTemplate::URunTemplate() {
    this->Type = ERunType::Default;
    this->IsUnlockedFromStart = false;
    this->DefaultStageTemplate = nullptr;
    this->DeepCoreBiome = nullptr;
    this->StagesLeftWhenDeepCoreStarts = 1;
    this->TutorialDepth = ERunDepth::None;
    this->TutorialDNA = nullptr;
    this->TutorialMutator = nullptr;
    this->HazardBonusDepth1 = 1.00f;
    this->HazardBonusDepth2 = 1.00f;
    this->HazardBonusDepth3 = 1.00f;
    this->HazardBonusDepth4 = 1.00f;
    this->LevelTimeScaleDepth1 = 1.00f;
    this->LevelTimeScaleDepth2 = 1.00f;
    this->LevelTimeScaleDepth3 = 1.00f;
    this->LevelTimeScaleDepth4 = 1.00f;
    this->BaseDifficultyDepth1 = nullptr;
    this->BaseDifficultyDepth2 = nullptr;
    this->BaseDifficultyDepth3 = nullptr;
    this->BaseDifficultyDepth4 = nullptr;
    this->StageLayoutForDepth1 = nullptr;
    this->StageLayoutForDepth2 = nullptr;
    this->StageLayoutForDepth3 = nullptr;
    this->StageLayoutForDepth4 = nullptr;
}

TArray<FSecondaryObjective> URunTemplate::GetSecondaryObjectivesForDepth(const ERunDepth Depth) const {
    return TArray<FSecondaryObjective>();
}

ERunType URunTemplate::GetRunType() const {
    return ERunType::Default;
}

TArray<FPrimaryObjective> URunTemplate::GetPrimaryObjectivesForDepth(const ERunDepth Depth) const {
    return TArray<FPrimaryObjective>();
}

float URunTemplate::GetLevelTimeScalingForDepth(const ERunDepth Depth) const {
    return 0.0f;
}

float URunTemplate::GetHazardBonusForDepth(const ERunDepth Depth) const {
    return 0.0f;
}

TArray<FExpeniteObjective> URunTemplate::GetExpeniteObjectivesForDepth(const ERunDepth Depth) const {
    return TArray<FExpeniteObjective>();
}

UDifficultySetting* URunTemplate::GetBaseDifficultyForDepth(const ERunDepth Depth) const {
    return NULL;
}

TArray<UStageTemplateOverride*> URunTemplate::GetAvailableBossesForDepth(const ERunDepth Depth) const {
    return TArray<UStageTemplateOverride*>();
}


