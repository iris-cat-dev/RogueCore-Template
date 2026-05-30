#include "DifficultyManager.h"

UDifficultyManager::UDifficultyManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinModifierEnemyCount = 0.30f;
    this->MinModifierAttackCooldown = 0.95f;
    this->MinModifierSpeed = 0.95f;
    this->UseSoloSpawnCountIfLastManStanding = false;
    this->ForcedPlayerCount = -1;
    this->GameMode = nullptr;
    this->GameState = nullptr;
}

UDifficultySetting* UDifficultyManager::SelectDifficulty(int32 Index) {
    return NULL;
}

float UDifficultyManager::GetSpeedModifier() const {
    return 0.0f;
}

float UDifficultyManager::GetPointExtractionScaler() const {
    return 0.0f;
}

float UDifficultyManager::GetEnemyDamageResistance(EEnemyHealthScaling healthScaling) const {
    return 0.0f;
}

float UDifficultyManager::GetEnemyDamageModifier() const {
    return 0.0f;
}

float UDifficultyManager::GetEnemyCountModifier() const {
    return 0.0f;
}

UDifficultySetting* UDifficultyManager::GetCurrentDifficulty() const {
    return NULL;
}

float UDifficultyManager::GetBossDifficultyScaler() const {
    return 0.0f;
}


