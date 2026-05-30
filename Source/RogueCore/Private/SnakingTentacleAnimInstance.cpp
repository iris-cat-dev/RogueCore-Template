#include "SnakingTentacleAnimInstance.h"

USnakingTentacleAnimInstance::USnakingTentacleAnimInstance() {
    this->HorizontalLook = 0.00f;
    this->VerticalLook = 0.00f;
    this->DistanceToTarget = 0.00f;
    this->StartReachingDistance = 1000.00f;
    this->FinishReachingDistance = 800.00f;
    this->ReachingValue = 0.00f;
    this->State = ESnakingTentacleState::Idle;
    this->HoldingTarget = false;
}


