#include "SeasonSettings.h"

USeasonSettings::USeasonSettings() {
    this->CurrentSeason = nullptr;
    this->MaxActiveChallenges = 0;
    this->XPPerLevel = 0;
    this->XPToPerforcemancePointsCurve = nullptr;
    this->TreeOfVanitySnapSize = 0;
    this->SpecialChallengeChange = 0.00f;
    this->HeartsColledtedStat = nullptr;
    this->HeartsPerScrip = 4;
    this->NumberOfScriptsFromPlague = 10;
}


