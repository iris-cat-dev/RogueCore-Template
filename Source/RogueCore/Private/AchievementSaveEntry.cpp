#include "AchievementSaveEntry.h"

FAchievementSaveEntry::FAchievementSaveEntry() {
    this->HighestSavedProgress = 0.00f;
    this->currentProgress = 0.00f;
    this->AchievementSaveID = FGuid();
}

