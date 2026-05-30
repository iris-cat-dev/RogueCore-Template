#include "RunState.h"

FRunState::FRunState() {
    this->ActiveStageIndex = 0;
    this->IsRiftBossFightCompleted = false;
    this->RunSetup = FRunSetup();
}

