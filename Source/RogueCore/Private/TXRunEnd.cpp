#include "TXRunEnd.h"

FTXRunEnd::FTXRunEnd() {
    this->Result = FString();
    this->run_loot = FTXRunEndLoot();
    this->run_info = FTXRunInfo();
    this->player_info = FTXPlayerInfo();
    this->player_details = FTXPlayerDetails();
    this->player_unlocks = FTXPlayerUnlocks();
    this->player_statistics = FTXPlayerStatistics();
}

