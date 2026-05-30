#include "UButtonGymMinigame.h"
#include "EGymGamemode.h"

UUButtonGymMinigame::UUButtonGymMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GymMode = EGymGamemode::Button;
    this->IntervalIncrease = 1.00f;
}

void UUButtonGymMinigame::IFrameChange(bool On) {
}


