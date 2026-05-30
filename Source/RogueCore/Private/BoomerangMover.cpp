#include "BoomerangMover.h"

FBoomerangMover::FBoomerangMover() {
    this->Speed = 0.00f;
    this->timescale = 0.00f;
    this->TickRate = 0.00f;
    this->TickTime = 0.00f;
    this->AccumulatedTime = 0.00f;
    this->TotalTime = 0.00f;
    this->StartSmoothTime = 0.00f;
    this->ArcCurve = nullptr;
    this->IsGoingBack = false;
    this->StartRotation = FRotator::ZeroRotator;
    this->PrevPos = FVector::ZeroVector;
    this->NextPos = FVector::ZeroVector;
    this->Velocity = FVector::ZeroVector;
}

