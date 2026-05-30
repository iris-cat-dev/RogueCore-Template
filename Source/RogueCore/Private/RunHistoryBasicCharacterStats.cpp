#include "RunHistoryBasicCharacterStats.h"

FRunHistoryBasicCharacterStats::FRunHistoryBasicCharacterStats() {
    this->PlayerId = 0;
    this->MaxHealth = 0.00f;
    this->MaxArmor = 0.00f;
    this->TotalKills = 0;
    this->TotalRevived = 0;
    this->TotalDeaths = 0;
    this->TotalMineralsMined = 0.00f;
    this->TotalHealthRestored = 0.00f;
    this->TotalCappedDamage = 0.00f;
    this->TotalOverkillDamage = 0.00f;
    this->PlayerRank = 0;
    this->PlayerStars = 0;
    this->CharacterLevel = 0;
    this->CharacterLevelProgress = 0.00f;
    this->CauseOfDeath = FString();
}

