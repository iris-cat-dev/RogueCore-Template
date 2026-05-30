#include "GymActivityStats.h"

UGymActivityStats::UGymActivityStats() {
    this->SpeedIncreaseInterval = 1.00f;
    this->HalfRepSpeedModifier = 1.00f;
    this->BaseRepTime = 5.00f;
    this->MinRepTime = 5.00f;
    this->RepTimeDifficultyIncrease = 0.00f;
    this->MontagePlayRateDifficultyIncrease = 0.00f;
    this->MaxMontagePlayRate = -1.00f;
    this->MaxLives = 3;
    this->DifficultyIncreaseInterval = 1.00f;
    this->TotalReps = -1;
    this->CaloriesPerRep = 1;
}


