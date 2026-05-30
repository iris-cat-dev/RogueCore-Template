#include "TXStageEnd.h"

FTXStageEnd::FTXStageEnd() {
    this->time_progression = 0.00f;
    this->is_final_stage = false;
    this->Result = FString();
    this->stage_info = FTXStageInfo();
    this->run_info = FTXRunInfo();
    this->player_info = FTXPlayerInfo();
    this->player_details = FTXPlayerDetails();
    this->player_unlocks = FTXPlayerUnlocks();
    this->player_statistics = FTXPlayerStatistics();
}

