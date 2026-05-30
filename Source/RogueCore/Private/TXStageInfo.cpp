#include "TXStageInfo.h"

FTXStageInfo::FTXStageInfo() {
    this->stage_index = 0;
    this->is_boss_stage = false;
    this->stage_seed = FString();
    this->stage_biome = FString();
    this->primary_objective = FString();
    this->expenite_objective = FString();
}

