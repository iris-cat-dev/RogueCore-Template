#include "ButtonSequenceGymMinigame.h"
#include "EGymGamemode.h"

UButtonSequenceGymMinigame::UButtonSequenceGymMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GymMode = EGymGamemode::ButtonSequence;
    this->StartDelayTime = 0.50f;
    this->HeldButtonTimer = 0.00f;
    this->HeldButtonTime = 1.00f;
    this->InverseHeldButtonTime = 0.00f;
    this->progression = 0.00f;
    this->MovingAnimationSpeed = 0.40f;
    this->ButtonHoldTime = 0.10f;
    this->NextKeyIndex = 0;
    this->NextBoxKeyIndex = 0;
    this->CurrentBox = 0;
    this->ButtonInputCount = 0;
    this->BoxOneKeyAmount = 0;
    this->BoxTwoKeyAmount = 0;
    this->BoxThreeKeyAmount = 0;
    this->RightKeyPressed = -1;
    this->GoingUp = false;
}

void UButtonSequenceGymMinigame::WrongInput() {
}

void UButtonSequenceGymMinigame::UpdateWidgetCurrentBox() {
}

void UButtonSequenceGymMinigame::UpdateInputSize(int32 Box, int32 InputCount) {
}

void UButtonSequenceGymMinigame::UpdateInputButtons() {
}

void UButtonSequenceGymMinigame::UpdateBoxKeyIndex() {
}

void UButtonSequenceGymMinigame::SetStartDelay(bool On) {
}

void UButtonSequenceGymMinigame::SetProgressOnWidgetIndex(int32 Index, float Progress) {
}

void UButtonSequenceGymMinigame::SetNewSequence() {
}

void UButtonSequenceGymMinigame::SetHighlightedButtonAllCompleted() {
}

void UButtonSequenceGymMinigame::SetHighlightedButton(int32 ButtonIndex, bool RecovedFromIFrame) {
}

void UButtonSequenceGymMinigame::SetGoingUpFlipped() {
}

void UButtonSequenceGymMinigame::SetFlipped(bool Flipped) {
}

void UButtonSequenceGymMinigame::SetAnimationToIndex() {
}

void UButtonSequenceGymMinigame::RightInput(int32 Index) {
}

void UButtonSequenceGymMinigame::ResetAllHighlighted() {
}

void UButtonSequenceGymMinigame::PlayerInputWidget(bool Hit) {
}

void UButtonSequenceGymMinigame::NextInput() {
}

EGymActions UButtonSequenceGymMinigame::GetRandomInput() {
    return EGymActions::Action1;
}

int32 UButtonSequenceGymMinigame::GetFirstIndexInBox() const {
    return 0;
}

void UButtonSequenceGymMinigame::GenerateNewInputSequence(int32 Amount) {
}

bool UButtonSequenceGymMinigame::CheckInput(EGymActions Action) {
    return false;
}

bool UButtonSequenceGymMinigame::CanUpdate() const {
    return false;
}

void UButtonSequenceGymMinigame::CalculateInputButtonNumbers() {
}

void UButtonSequenceGymMinigame::AnimationSequenceDone() {
}


