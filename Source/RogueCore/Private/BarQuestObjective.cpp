#include "BarQuestObjective.h"

UBarQuestObjective::UBarQuestObjective() {
    this->RepsPerSet = 1;
    this->SetsToComplete = 1;
    this->Weight = -1.00f;
}

int32 UBarQuestObjective::GetSetsToComplete() const {
    return 0;
}

int32 UBarQuestObjective::GetRepsPerSets() const {
    return 0;
}


