#include "TXNegotiationEndWorkbench.h"

FTXNegotiationEndWorkbench::FTXNegotiationEndWorkbench() {
    this->picked_index = 0;
    this->picked_type = FString();
    this->player_unlocks = FTXPlayerUnlocks();
    this->run_info = FTXRunInfo();
    this->player_info = FTXPlayerInfo();
}

