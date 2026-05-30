#include "SpawnQueueItem.h"

FSpawnQueueItem::FSpawnQueueItem() {
    this->Enemy = nullptr;
    this->EnemyClass = nullptr;
    this->Callback = FEnemySpawnedDelegate();
}

