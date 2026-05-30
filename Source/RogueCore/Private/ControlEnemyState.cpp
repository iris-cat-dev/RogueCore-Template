#include "ControlEnemyState.h"

FControlEnemyState::FControlEnemyState() {
    this->ControlledEnemy = nullptr;
    this->InitialTargetBlendTotalTime = 0.00f;
    this->InitialTargetTransform = FTransform::Identity;
    this->InitialCharacterVelocity = FVector::ZeroVector;
    this->InitialEnemyVelocity = FVector::ZeroVector;
}

