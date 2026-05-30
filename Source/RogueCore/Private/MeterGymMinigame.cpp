#include "MeterGymMinigame.h"
#include "EGymGamemode.h"

UMeterGymMinigame::UMeterGymMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GymMode = EGymGamemode::Meter;
    this->ExtraSafeZoneHitArea = 0.00f;
    this->HitAnimationTime = 0.20f;
}

void UMeterGymMinigame::PlayerInputWidget(bool Hit) {
}

void UMeterGymMinigame::IFrameChange(bool On) {
}


