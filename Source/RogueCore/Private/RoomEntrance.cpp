#include "RoomEntrance.h"

FRoomEntrance::FRoomEntrance() {
    this->IsBlocked = false;
    this->EntranceType = ECaveEntranceType::EntranceAndExit;
    this->Priority = ECaveEntrancePriority::Primary;
    this->PathObstacleID = 0;
    this->Location = FVector3f::ZeroVector;
    this->Direction = FVector3f::ZeroVector;
}

