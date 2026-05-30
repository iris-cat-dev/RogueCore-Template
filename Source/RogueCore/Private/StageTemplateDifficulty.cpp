#include "StageTemplateDifficulty.h"

UStageTemplateDifficulty::UStageTemplateDifficulty() {
    this->StageEnemyCountModifier = 1.00f;
    this->StageEnemyDamageModifier = 1.00f;
    this->StageResistanceModifier_SmallEnemies = 1.00f;
    this->StageResistanceModifier_MediumEnemies = 1.00f;
    this->StageResistanceModifier_LargeEnemies = 1.00f;
    this->WaveIntervalMultiplier = 1.00f;
    this->RoomEncounterScale = 1.00f;
    this->StationaryEnemyScale = 2.00f;
    this->EliteCommonCount = 0;
    this->DisruptiveEnemyCount = 0;
    this->SpecialEnemyCount = 0;
    this->LevelTimeScale = 1.00f;
}


