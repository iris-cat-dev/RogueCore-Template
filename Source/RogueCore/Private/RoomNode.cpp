#include "RoomNode.h"

FRoomNode::FRoomNode() {
    this->ID = 0;
    this->CarvePass = 0;
    this->Radius = 0.00f;
    this->CanHaveEnemies = false;
    this->CanHaveExitElevator = false;
    this->ResourceMultiplier = 0.00f;
    this->CanBeUsedForRoomBasedDistribution = false;
    this->WeightedResourceAmount = 0.00f;
    this->position = FVector3f::ZeroVector;
}

