#include "TeamTransportState.h"

FTeamTransportState::FTeamTransportState() {
    this->State = EMiningPodState::Dropping;
    this->StartLocation = FVector::ZeroVector;
    this->TargetLocation = FVector::ZeroVector;
}

