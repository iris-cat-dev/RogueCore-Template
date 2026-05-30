#include "BXESettings.h"

UBXESettings::UBXESettings() {
    this->ProgressionSettings = nullptr;
    this->MissionStats = nullptr;
    this->BXETreasureSettings = nullptr;
    this->RunSettings = nullptr;
    this->RewardTree = nullptr;
    this->BXENameBank = nullptr;
    this->ObjectivesAreRequired = true;
    this->CreditsPerPrimaryObjective = 1000;
    this->CreditsPerSecondaryObjective = 1000;
    this->XPPerPrimaryObjective = 1000;
    this->XPPerExpenite = 2;
    this->XPNiteValueMultiplier = 1.00f;
    this->XPPerKill = 10.00f;
    this->MaxChips = 280;
    this->XPToReclaimerPointsCurve = nullptr;
    this->MasteryXPPerLevel = 10000.00f;
    this->EndOfMasteryProgressionMeritRewardPerLevel = 750.00f;
    this->RPToMasteryXPRatio = 1.00f;
    this->DeepCoreBiome = nullptr;
    this->TutorialBiome = nullptr;
    this->CinematicBiome = nullptr;
}


