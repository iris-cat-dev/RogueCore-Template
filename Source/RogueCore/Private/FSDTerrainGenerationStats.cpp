#include "FSDTerrainGenerationStats.h"

FFSDTerrainGenerationStats::FFSDTerrainGenerationStats() {
    this->NumRunningTasks = 0;
    this->CurrentAsyncTaskDescription = FString();
    this->PLSPass = FString();
}

