#include "FakeSawMover.h"

FFakeSawMover::FFakeSawMover() {
    this->VelOverTime = nullptr;
    this->SpeedCof = 0.00f;
    this->TickRate = 0.00f;
    this->TickTime = 0.00f;
    this->AccumulatedTime = 0.00f;
    this->TotalTime = 0.00f;
    this->Moving = false;
    this->GravityTimer = 0.00f;
    this->PrevPos = FVector::ZeroVector;
    this->NextPos = FVector::ZeroVector;
    this->Velocity = FVector::ZeroVector;
    this->Plane = FPlane();
}

