#include "BaseGymMinigame.h"

UBaseGymMinigame::UBaseGymMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseDifficulty = 50;
    this->MaxDifficulty = 10;
    this->SingleMotion = false;
    this->Properties = nullptr;
    this->FitnessInputComponent = nullptr;
    this->GymComponent = nullptr;
    this->GymMode = EGymGamemode::None;
    this->UseMultipleCameraAngles = false;
}

void UBaseGymMinigame::SoundQueDelegatePushed(USoundControlBus* Bus, float Value, float FadeTime) {
}

void UBaseGymMinigame::OnInputSourceChanged(const EFSDInputSource NewInputSource) {
}

UTexture2D* UBaseGymMinigame::GetInputTexture(EGymActions Action) {
    return NULL;
}

FName UBaseGymMinigame::GetInputKey(EGymActions Action, int32& outAxis) {
    return NAME_None;
}

void UBaseGymMinigame::ConsumeInputAction() {
}


