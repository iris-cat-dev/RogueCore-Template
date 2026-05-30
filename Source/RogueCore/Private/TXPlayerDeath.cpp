#include "TXPlayerDeath.h"

FTXPlayerDeath::FTXPlayerDeath() {
    this->seconds_since_last_damage_taken = 0;
    this->seconds_since_last_revive = 0;
    this->death_cause = FString();
    this->player_info = FTXPlayerInfo();
}

