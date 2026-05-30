#include "PlayerFPAnimInstance.h"

UPlayerFPAnimInstance::UPlayerFPAnimInstance() {
    this->HeadBobScale = 1.00f;
    this->WeaponSwayRecoverySpeed = 10.00f;
    this->WeaponSwayAlphaRecoverySpeed = 25.00f;
    this->WeaponSwayMaxAngle = 10.00f;
    this->WeaponSwayAlpha = 1.00f;
    this->WeaponSwayToApply = 0.00f;
    this->HeadOnlyMode = false;
    this->FP_Idle = nullptr;
    this->FP_Walk = nullptr;
    this->FP_Sprint = nullptr;
    this->FP_JumpStart = nullptr;
    this->FP_JumpLoop = nullptr;
    this->FP_JumpLand = nullptr;
    this->FP_JumpLand_Aim = nullptr;
    this->FP_Downed = nullptr;
}


