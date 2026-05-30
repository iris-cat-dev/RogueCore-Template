#include "EndMissionResult.h"

FEndMissionResult::FEndMissionResult() {
    this->RewardedSchematic = nullptr;
    this->bReadyForUse = false;
    this->PreviousPlayerProgress = FPlayerProgress();
    this->PlayerProgress = FPlayerProgress();
    this->PreviousCharacterProgress = FCharacterProgress();
    this->CharacterProgress = FCharacterProgress();
}

