#include "TXNegotiationEndUpgrade.h"

FTXNegotiationEndUpgrade::FTXNegotiationEndUpgrade() {
    this->negotiation_id = 0;
    this->negotiation_pool = FString();
    this->selected_option = FString();
    this->player_unlocks = FTXPlayerUnlocks();
    this->run_info = FTXRunInfo();
    this->player_info = FTXPlayerInfo();
}

