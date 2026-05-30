#include "EnemyMinersManualData.h"

UEnemyMinersManualData::UEnemyMinersManualData() {
    this->EnemyID = nullptr;
    this->Family = EEnemyFamily::CoreSpawn;
    this->EnemyType = EEnemyType::Ground;
    this->ArmorType = EArmorType::Light;
    this->AlwaysUnlocked = false;
    this->InfoUnlockSpeed = 2;
}

UTexture2D* UEnemyMinersManualData::GetEnemyIcon() const {
    return NULL;
}


