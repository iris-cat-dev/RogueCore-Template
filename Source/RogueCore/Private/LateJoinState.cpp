#include "LateJoinState.h"

FLateJoinState::FLateJoinState() {
    this->IsLateJoinActive = false;
    this->IsBarrierDronesBuilt = false;
    this->IsEntranceDoorOpened = false;
    this->IsNegotiationActive = false;
    this->DoesTeamHaveWeapons = false;
    this->DoesTeamHaveGrenades = false;
    this->IsStageTimerStarted = false;
    this->IsTentacleWaveActive = false;
    this->IsExitButtonPressed = false;
}

