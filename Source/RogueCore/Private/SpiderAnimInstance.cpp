#include "SpiderAnimInstance.h"

USpiderAnimInstance::USpiderAnimInstance() {
    this->Speed = 0.00f;
    this->WalkCycleSpeed = 200.00f;
    this->StartMovingSpeed = 50.00f;
    this->StopMovingSpeed = 10.00f;
    this->TurningAngularSpeed = 1.00f;
    this->WalkCycleMinRate = 0.30f;
    this->MinSpeedToOmniStrafe = 10.00f;
    this->WalkCyclePlayRate = 0.00f;
    this->TurnCyclePlayRate = 0.00f;
    this->WalkCyclePlayRateExperimental = 0.00f;
    this->MaxTurnRateForWalkCyclePlayRateExperimentalCalc = 50.00f;
    this->MeshScale = 1.00f;
    this->Direction = 0.00f;
    this->PathDirectionLerpSpeedIn = 5.00f;
    this->PathDirectionLerpSpeedOut = 1.00f;
    this->PathDirection = 0.00f;
    this->HorizontalAngularSpeed = 0.00f;
    this->HorizontalAngularSpeed_Abs = 0.00f;
    this->HorizontalAngularSpeedRaw = 0.00f;
    this->VerticalAngularSpeed = 0.00f;
    this->VerticalAngularSpeedRaw = 0.00f;
    this->HorizontalStrafeSpeed = 0.00f;
    this->VerticalStrafeSpeed = 0.00f;
    this->VerticalStrafeOmni = 0.00f;
    this->HorizontalStrafeOmni = 0.00f;
    this->HorizontalAngleToWorldUp = 0.00f;
    this->VerticalAngleToWorldUp = 0.00f;
    this->MoveDirection = EMoveDirection::None;
    this->IsMoving = false;
    this->IsStrafing = false;
    this->IsMovingAndStrafing = false;
    this->IsFrozen = false;
    this->IsStaggered = false;
    this->StaggerStrength = 1.00f;
    this->IsAirborne = false;
    this->FootStepParticle = nullptr;
    this->FootStepSound = nullptr;
    this->FootStepParticleCullDistance = 1000.00f;
    this->RandomWalkCycleIndex = 0;
    this->RandomIdleCycle = 0;
    this->TotalRandomIdleCycles = 0;
    this->TurnToIdle = false;
    this->IdleToTurnLeft = false;
    this->IdleToTurnRight = false;
    this->TurnToWalk = false;
    this->WalkToTurnRight = false;
    this->WalkToTurnLeft = false;
    this->ExclusiveTurnStateMode = false;
    this->IsInFakePhysics = false;
    this->SpawnMontage = nullptr;
    this->ShouldPlaySpawnMontage = false;
    this->HasCompletedSpawnAnimation = false;
    this->DeathAnimationCategory = ESpiderDeathAnimationCategory::NoAnimation;
    this->AimHorizontal = 0.00f;
    this->AimVertical = 0.00f;
}

bool USpiderAnimInstance::ShouldPlaySpawnAnimation() const {
    return false;
}

void USpiderAnimInstance::SetMeshScale(float NewScale) {
}

void USpiderAnimInstance::SetDeathAnimationCategory(ESpiderDeathAnimationCategory Category) {
}


void USpiderAnimInstance::PlayForcedCycle(float duration) {
}

void USpiderAnimInstance::OnMontageFinished(UAnimMontage* Montage, bool wasInterrupted) {
}

bool USpiderAnimInstance::IsTurningAndNotMoving() const {
    return false;
}

bool USpiderAnimInstance::IsTurning() const {
    return false;
}

bool USpiderAnimInstance::IsStrafingOrTurning() const {
    return false;
}

bool USpiderAnimInstance::IsNotTurning() const {
    return false;
}

bool USpiderAnimInstance::IsNotStrafing() const {
    return false;
}

bool USpiderAnimInstance::IsNotStaggered() const {
    return false;
}

bool USpiderAnimInstance::IsNotMoving() const {
    return false;
}

bool USpiderAnimInstance::IsNotFrozen() const {
    return false;
}

bool USpiderAnimInstance::IsNotAirborne() const {
    return false;
}

bool USpiderAnimInstance::IsMovingOrTurning() const {
    return false;
}

bool USpiderAnimInstance::HasSpawnAnimationCompleted() const {
    return false;
}

bool USpiderAnimInstance::GetIsMovingOrStrafing() const {
    return false;
}


