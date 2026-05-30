#include "RunGymMinigame.h"
#include "EGymGamemode.h"

URunGymMinigame::URunGymMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GymMode = EGymGamemode::Run;
    this->EnemiesWidget = nullptr;
}

void URunGymMinigame::IFrameChange(bool On) {
}


