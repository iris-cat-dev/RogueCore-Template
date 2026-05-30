#include "FitnessGymStateComponent.h"
#include "Net/UnrealNetwork.h"

UFitnessGymStateComponent::UFitnessGymStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 19;
    this->GymActivity = nullptr;
    this->CurrentExerciseIcon = nullptr;
    this->GymMode = EGymGamemode::None;
    this->CurrentGymMinigame = nullptr;
    this->CurrentAnimState = EGymAnimationState::None;
    this->StressLevel = 0.00f;
    this->AnimationProgress = 0.00f;
    this->GymPlayRate = 1.00f;
    this->AnimationProgressInstant = false;
}

void UFitnessGymStateComponent::TamperWithEquipment_Implementation() {
}

void UFitnessGymStateComponent::StartActivity(ABaseFitnessActivity* Activity) {
}

void UFitnessGymStateComponent::SetIFrame_Implementation(const bool On) {
}


void UFitnessGymStateComponent::SetComplete_Implementation() {
}

void UFitnessGymStateComponent::Server_VisiblityChanged_Implementation(bool visible) {
}

void UFitnessGymStateComponent::Server_UpdateGymProgressLevel_Implementation(float PlayTimePosition, bool Manual, bool Instant) {
}

void UFitnessGymStateComponent::Server_TeleportPlayer_Implementation() {
}

void UFitnessGymStateComponent::Server_SendStressLevels_Implementation(float Stress) {
}

void UFitnessGymStateComponent::Server_SendSoundQue_Implementation(USoundControlBus* Bus, float Value, float FadeTime) {
}

void UFitnessGymStateComponent::Server_SendGymPlayRate_Implementation(float PlayRate) {
}

void UFitnessGymStateComponent::Server_ForceEndActivity_Implementation() {
}

void UFitnessGymStateComponent::Server_EndActivity_Implementation() {
}

void UFitnessGymStateComponent::Server_ChangeAnimState_Implementation(EGymAnimationState NewState) {
}

void UFitnessGymStateComponent::SendScore_Implementation(int32 Score) {
}

void UFitnessGymStateComponent::SendPersonalBest(int32 Score) {
}

void UFitnessGymStateComponent::RepComplete_Implementation(int32 RepCount) {
}

void UFitnessGymStateComponent::PassOut(APlayerCharacter* Player) {
}

void UFitnessGymStateComponent::OnRep_StressLevel() {
}

void UFitnessGymStateComponent::OnRep_GymPlayRate() {
}

void UFitnessGymStateComponent::OnRep_GymActivity() {
}

void UFitnessGymStateComponent::OnRep_AnimState(EGymAnimationState oldState) {
}

void UFitnessGymStateComponent::OnRep_AnimationProgress() {
}

void UFitnessGymStateComponent::IncreaseSpeedWithInterval() {
}

void UFitnessGymStateComponent::IncreaseSpeed(float Amount) {
}

void UFitnessGymStateComponent::IncreaseDifficultyWithInterval() {
}

void UFitnessGymStateComponent::IncreaseDifficulty(int32 Amount) {
}

int32 UFitnessGymStateComponent::GetPersonalBest() {
    return 0;
}

UAnimSequence* UFitnessGymStateComponent::GetAnimSequence(EGymAnimationState State) {
    return NULL;
}

void UFitnessGymStateComponent::ForceEndActivity(APlayerCharacter* Player) {
}

void UFitnessGymStateComponent::AnimNotifyCheck(FName NotifyName) {
}

void UFitnessGymStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFitnessGymStateComponent, GymActivity);
    DOREPLIFETIME(UFitnessGymStateComponent, CurrentAnimState);
    DOREPLIFETIME(UFitnessGymStateComponent, StressLevel);
    DOREPLIFETIME(UFitnessGymStateComponent, AnimationProgress);
    DOREPLIFETIME(UFitnessGymStateComponent, GymPlayRate);
    DOREPLIFETIME(UFitnessGymStateComponent, AnimationProgressInstant);
}


