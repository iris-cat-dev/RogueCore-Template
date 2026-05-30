#include "BarQuestData.h"

FBarQuestData::FBarQuestData() {
    this->EasyDifficultyWeight = 0.00f;
    this->NormalDifficultyWeight = 0.00f;
    this->HardDifficultyWeight = 0.00f;
    this->ImpossibleDifficultyWeight = 0.00f;
    this->DifficultyChoice = EExerciseDifficultyChoice::AlwaysPickSelected;
    this->Identifier = nullptr;
}

