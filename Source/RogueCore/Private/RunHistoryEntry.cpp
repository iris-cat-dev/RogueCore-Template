#include "RunHistoryEntry.h"

FRunHistoryEntry::FRunHistoryEntry() {
    this->SharedInfo = FSharedRunData();
    this->RunInfo = FRunHistoryRunInfo();
    this->Characters = FRunHistoryCharacterData();
    this->DamageCollection = FRunHistoryDamageData();
}

