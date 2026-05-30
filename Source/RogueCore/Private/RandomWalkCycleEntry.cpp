#include "RandomWalkCycleEntry.h"

FRandomWalkCycleEntry::FRandomWalkCycleEntry() {
    this->RandomSelectionWeight = 0.00f;
    this->Animation = nullptr;
    this->CoolDown = 0.00f;
    this->LastTimePlayed = 0.00f;
    this->duration = FRandRange();
}

