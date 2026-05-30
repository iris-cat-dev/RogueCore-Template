#include "TXIntelChallengeClaimed.h"

FTXIntelChallengeClaimed::FTXIntelChallengeClaimed() {
    this->challenge_name = FString();
    this->challenge_guid = FString();
    this->run_statistics = FTXRunStatistics();
    this->player_info = FTXPlayerInfo();
}

