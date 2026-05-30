#include "ItemCharacterAnimationSet.h"

UItemCharacterAnimationSet::UItemCharacterAnimationSet() {
    this->FP_Idle = nullptr;
    this->FP_InspectWeapon = nullptr;
    this->FP_Walk = nullptr;
    this->FP_Sprint = nullptr;
    this->FP_JumpStart = nullptr;
    this->FP_JumpLoop = nullptr;
    this->FP_JumpLand = nullptr;
    this->FP_JumpLand_Aim = nullptr;
    this->FP_Downed = nullptr;
    this->TP_LookUpDown = nullptr;
    this->TP_LookUpDown_Aim = nullptr;
    this->TP_Sprint = nullptr;
    this->TP_Idle = nullptr;
    this->TP_Idle_Aim = nullptr;
    this->TP_LookForward = nullptr;
    this->TP_LookForward_Aim = nullptr;
    this->TP_JumpStart = nullptr;
    this->TP_JumpStart_Aim = nullptr;
    this->TP_JumpLoop = nullptr;
    this->TP_JumpLoop_Aim = nullptr;
    this->TP_JumpLand = nullptr;
    this->TP_Walk_Forward = nullptr;
    this->TP_Walk_Forward_Aim = nullptr;
    this->TP_Run_Forward = nullptr;
    this->TP_Run_Forward_Aim = nullptr;
    this->TP_Walk_Right = nullptr;
    this->TP_Walk_Right_Aim = nullptr;
    this->TP_Run_Right = nullptr;
    this->TP_Run_Right_Aim = nullptr;
    this->TP_Walk_Left = nullptr;
    this->TP_Walk_Left_Aim = nullptr;
    this->TP_Run_Left = nullptr;
    this->TP_Run_Left_Aim = nullptr;
    this->TP_Walk_Back = nullptr;
    this->TP_Walk_Back_Aim = nullptr;
    this->TP_Run_Back = nullptr;
    this->TP_Run_Back_Aim = nullptr;
    this->TP_Revived = nullptr;
    this->TP_Downed = nullptr;
    this->TP_Downed_Loop = nullptr;
    this->TP_ItemAimSetup = EItemAimSetup::FromParent;
    this->TP_AlwaysAim = false;
    this->CameraOffset = 0.00f;
    this->ParentSet = nullptr;
}


