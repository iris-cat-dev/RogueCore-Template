#include "PlayerAnimInstance.h"

UPlayerAnimInstance::UPlayerAnimInstance() {
    this->IsFirstPerson = false;
    this->WalkTreshhold = 200.00f;
    this->Character = nullptr;
    this->DefaultFootstepParticle = nullptr;
    this->DefaultFootStepSound = nullptr;
    this->AnimationSetA = nullptr;
    this->AnimationSetB = nullptr;
    this->AnimationSetAIsPrimary = true;
    this->CharacterState = ECharacterState::Walking;
    this->Speed = 0.00f;
    this->WalkAnimationSpeed = 140.00f;
    this->RunAnimationSpeed = 400.00f;
    this->WalkRate = 0.00f;
    this->RunRate = 0.00f;
    this->Direction = 0.00f;
    this->IsInitialized = false;
    this->pitch = 0.00f;
    this->IsStandingDown = false;
    this->IsInAir = false;
    this->IsMoving = false;
    this->IsWalking = false;
    this->IsSprinting = false;
    this->IsAiming = false;
    this->IsAlive = false;
    this->IsLyingDown = false;
    this->OnZipline = false;
    this->IsGrinding = false;
    this->IsParalyzed = false;
    this->IsSuspended = false;
    this->IsGrabbed = false;
    this->IsAttached = false;
    this->BeingRevived = false;
    this->IsLookingAtMap = false;
    this->IsControllingEnemy = false;
    this->IsUsingJetBoots = false;
    this->IsUsingTraversalTool = false;
    this->IsInTheGym = false;
    this->GymInterpolateTime = false;
    this->GymConstantTime = false;
    this->GymInMotion = false;
    this->GymInReverse = false;
    this->GymTimeGoal = 0.00f;
    this->GymCurrentTime = 0.00f;
    this->GymPlayRate = 1.00f;
    this->GymStressLevel = 0.00f;
    this->GymState = EGymAnimationState::None;
    this->GymProperties = nullptr;
    this->IsInLoadingScreen = false;
    this->IsInShowRoom = false;
    this->IsShowroomZoomedIn = false;
    this->TraversalToolTargetHorizontalOffset = 0.00f;
    this->TraversalToolTargetVerticalOffset = 0.00f;
    this->TraversalToolSpeedRate = 0.00f;
    this->GliderAnimationLength = 1.00f;
    this->IsAllowedToPlayMovementAnim = false;
    this->CropBeard = 0.00f;
    this->ActiveUseMontage = nullptr;
    this->CurrentUseSetting = nullptr;
    this->EndUseMontageToPlay = nullptr;
    this->AimDuration = 1.00f;
    this->ReviveProgress = 0.00f;
    this->ReviveExplicitTime = 0.00f;
    this->IdleTimeForInspect = 3.00f;
    this->RepeatDealayForInspect = 10.00f;
    this->CharacterMoveDirection = ECharacterMoveDirection::None;
    this->MoveAdjustmentAngle = 0.00f;
    this->CarryAnimationSet = nullptr;
    this->DefaultAnimationSet = nullptr;
}

void UPlayerAnimInstance::UpdateGymStressLevel(float StressLevel) {
}

void UPlayerAnimInstance::UpdateGymState(EGymAnimationState State) {
}

void UPlayerAnimInstance::UpdateGymProgressLevel(float Progress, bool Manual, bool Instant) {
}

void UPlayerAnimInstance::UpdateGymPlayRate(float PlayRate) {
}

bool UPlayerAnimInstance::StopUseMontage(bool stopImmediately) {
    return false;
}



void UPlayerAnimInstance::SetAiming() {
}

void UPlayerAnimInstance::SendGymProperties(UGymActivityProperties* Properties) {
}

void UPlayerAnimInstance::PlayUseMontages(UUseAnimationSetting* useSetting) {
}

bool UPlayerAnimInstance::PlayCompletedUseMontage(UUseAnimationSetting* useSetting) {
    return false;
}


bool UPlayerAnimInstance::IsPlayingMontageInGroup(FName GroupName) const {
    return false;
}

bool UPlayerAnimInstance::IsGymInIdlePosition() const {
    return false;
}

UClassAnimationSet* UPlayerAnimInstance::GetClassAnimationSet() const {
    return NULL;
}

APlayerCharacter* UPlayerAnimInstance::GetCharacter() {
    return NULL;
}

UItemCharacterAnimationSet* UPlayerAnimInstance::GetAnimationSet() const {
    return NULL;
}

float UPlayerAnimInstance::CalculateDirectionVertical(const FVector& TargetDirection, const FRotator& BaseRotation) const {
    return 0.0f;
}


