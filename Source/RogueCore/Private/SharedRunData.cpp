#include "SharedRunData.h"

FSharedRunData::FSharedRunData() {
    this->MissionSuccess = false;
    this->Year = 0;
    this->Month = 0;
    this->Day = 0;
    this->CompletedStages = 0;
    this->MissionTime = 0;
    this->LocalCharacterId = 0;
    this->BasicCooperStats = FRunHistoryBasicCooperStats();
}

