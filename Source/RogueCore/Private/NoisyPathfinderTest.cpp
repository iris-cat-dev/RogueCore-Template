#include "NoisyPathfinderTest.h"

ANoisyPathfinderTest::ANoisyPathfinderTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DirectionDistance = 0.00f;
    this->DirectionPenalty = 35000.00f;
    this->ZPenaltyPower = 1.10f;
    this->ZPenaltyScale = 0.10f;
    this->DistancePenaltyScale = 10.00f;
    this->RandomPenaltyScale = 1500.00f;
    this->TunnelSettings = nullptr;
    this->TunnelParameters = nullptr;
    this->StepSize = 1;
    this->Realtime = false;
    this->CarvePath = false;
    this->CanDiagonal = false;
    this->FloodFillSettings = nullptr;
    this->CSGWorld = nullptr;
}


