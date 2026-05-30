#include "MissionShouts.h"

FMissionShouts::FMissionShouts() {
    this->AfterDropPodExit = nullptr;
    this->OnExitPodDescending = nullptr;
    this->OnExitPodArrived = nullptr;
    this->OnCompletion = nullptr;
    this->OnCompletion_OneOfMultiple = nullptr;
    this->OnAllReturnObjectivesCompleted = nullptr;
    this->OnDeepDiveExitPodDescending = nullptr;
}

