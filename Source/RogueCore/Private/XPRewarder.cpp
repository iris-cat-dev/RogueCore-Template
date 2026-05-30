#include "XPRewarder.h"

AXPRewarder::AXPRewarder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RewardObjective = nullptr;
    this->XRange = 0.00f;
    this->YRange = 0.00f;
    this->SpawnDelay = 0.03f;
    this->ChunksToSpawn = 20;
    this->XPToAward = 50;
    this->AutoActivate = false;
}

void AXPRewarder::Activate(int32 XP) {
}


