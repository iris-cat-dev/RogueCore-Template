#include "SharkAnimInstance.h"

USharkAnimInstance::USharkAnimInstance() {
    this->SharkState = ESharkEnemyState::Idle;
    this->IsCloseToGround = false;
    this->AttackConnected = false;
    this->IsAttackingAndAttackNotConnected = false;
    this->IsNotAttackingOrAttackConnected = false;
    this->IsFalling = false;
    this->IsVulnerable = false;
    this->BendValue = 0.00f;
    this->IsTurningSharkEdition = false;
    this->TurnSpeed = 0.00f;
    this->IdleSpeed = 0.00f;
}


