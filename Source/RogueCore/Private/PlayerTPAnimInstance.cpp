#include "PlayerTPAnimInstance.h"

UPlayerTPAnimInstance::UPlayerTPAnimInstance() {
    this->UpperBodyCharacterSet = nullptr;
    this->RigidBodyBlend = 1.00f;
    this->RigidBodyOn = false;
    this->UpperBodyBlend = 1.00f;
    this->UpperBodyAnimationSetBlend = 0.00f;
    this->AimingValue = 0.00f;
    this->TP_ItemAimSetup = EItemAimSetup::TwoHanded;
    this->TP_ForceAim = false;
    this->FullBodyAnimActive = false;
    this->FullBodyBlendTime = 0.10f;
    this->BodyTurnRecoverySpeed = 10.00f;
    this->BodyTurnMaxAngle = 70.00f;
    this->BodyTurnLerpEXP = 2.00f;
    this->TurnAnimationDuration = 0.80f;
    this->bCaveLeechBiting = false;
    this->CaveLeechBiteReactDelay = 1.00f;
    this->IsResettingBodyTurn = false;
    this->TurningLeft = false;
    this->TurningRight = false;
    this->TurnProgress = 0.00f;
    this->ItemIdleBlendTime = 0.30f;
    this->HasPickedUpItem = false;
    this->IsLyingDownNoTransition = false;
    this->DanceMove = 0;
    this->DanceSequence = nullptr;
    this->IsDancing = false;
    this->IsKneeling = false;
    this->IsAscending = false;
    this->PickedUpItemBlend = 0.00f;
    this->AttachedBodyTurnFactor = 0.50f;
    this->AttachedHeadTurnFactor = 0.50f;
    this->TP_LookUpDown = nullptr;
    this->TP_LookUpDown_Aim = nullptr;
    this->A_TP_LookUpDown_Aim = nullptr;
    this->B_TP_LookUpDown_Aim = nullptr;
    this->TP_JumpLoop = nullptr;
    this->TP_JumpLoop_Aim = nullptr;
    this->TP_JumpStart = nullptr;
    this->TP_JumpStart_Aim = nullptr;
    this->TP_Sprint = nullptr;
    this->A_TP_Idle = nullptr;
    this->B_TP_Idle = nullptr;
    this->A_TP_Idle_Aim = nullptr;
    this->B_TP_Idle_Aim = nullptr;
    this->TP_LookForward = nullptr;
    this->A_TP_LookForward = nullptr;
    this->B_TP_LookForward = nullptr;
    this->A_TP_LookForward_Aim = nullptr;
    this->B_TP_LookForward_Aim = nullptr;
    this->A_TP_Walk_Forward = nullptr;
    this->B_TP_Walk_Forward = nullptr;
    this->A_TP_Run_Forward = nullptr;
    this->B_TP_Run_Forward = nullptr;
    this->A_TP_Walk_Forward_Aim = nullptr;
    this->B_TP_Walk_Forward_Aim = nullptr;
    this->A_TP_Run_Forward_Aim = nullptr;
    this->B_TP_Run_Forward_Aim = nullptr;
    this->A_TP_Walk_Right = nullptr;
    this->B_TP_Walk_Right = nullptr;
    this->A_TP_Run_Right = nullptr;
    this->B_TP_Run_Right = nullptr;
    this->A_TP_Walk_Right_Aim = nullptr;
    this->B_TP_Walk_Right_Aim = nullptr;
    this->A_TP_Run_Right_Aim = nullptr;
    this->B_TP_Run_Right_Aim = nullptr;
    this->A_TP_Walk_Left = nullptr;
    this->B_TP_Walk_Left = nullptr;
    this->A_TP_Run_Left = nullptr;
    this->B_TP_Run_Left = nullptr;
    this->A_TP_Walk_Left_Aim = nullptr;
    this->B_TP_Walk_Left_Aim = nullptr;
    this->A_TP_Run_Left_Aim = nullptr;
    this->B_TP_Run_Left_Aim = nullptr;
    this->A_TP_Walk_Back = nullptr;
    this->B_TP_Walk_Back = nullptr;
    this->A_TP_Run_Back = nullptr;
    this->B_TP_Run_Back = nullptr;
    this->A_TP_Walk_Back_Aim = nullptr;
    this->B_TP_Walk_Back_Aim = nullptr;
    this->A_TP_Run_Back_Aim = nullptr;
    this->B_TP_Run_Back_Aim = nullptr;
    this->TP_Revived = nullptr;
    this->TP_Downed = nullptr;
    this->TP_Downed_Loop = nullptr;
    this->UB_Idle = nullptr;
    this->UB_Jump = nullptr;
    this->UB_Sprint = nullptr;
    this->UB_Walk = nullptr;
    this->UB_Run = nullptr;
}

void UPlayerTPAnimInstance::SetOverrideFullBody(bool overrideEnabled) {
}


