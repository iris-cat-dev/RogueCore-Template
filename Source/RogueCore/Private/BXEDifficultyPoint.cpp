#include "BXEDifficultyPoint.h"

FBXEDifficultyPoint::FBXEDifficultyPoint() {
    this->PreemptiveWarningTime = 0.00f;
    this->PreemptiveWarningShout = nullptr;
    this->EnemyCountScale = 0.00f;
    this->CorruptedEnemyChance = 0.00f;
    this->WaveAtStart = nullptr;
    this->StartMusic = nullptr;
    this->MissionControlStartShout = nullptr;
    this->MissionControlStartShoutNoExtraction = nullptr;
    this->MissionControlStartShoutRepeatInterval = 0.00f;
    this->Name = FText::GetEmpty();
    this->TimesPerPlayerCount = FTimesPerPlayerCount();
    this->Color = FLinearColor::White;
}

