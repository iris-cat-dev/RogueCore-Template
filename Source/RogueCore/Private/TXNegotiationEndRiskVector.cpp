#include "TXNegotiationEndRiskVector.h"

FTXNegotiationEndRiskVector::FTXNegotiationEndRiskVector() {
    this->vote_id = 0;
    this->winner_index = 0;
    this->player_vote_index = 0;
    this->run_info = FTXRunInfo();
    this->player_info = FTXPlayerInfo();
}

