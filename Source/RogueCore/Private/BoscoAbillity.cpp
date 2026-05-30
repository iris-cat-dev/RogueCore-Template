#include "BoscoAbillity.h"

UBoscoAbillity::UBoscoAbillity() {
    this->AbillityAnimation = nullptr;
    this->VoiceOnUse = nullptr;
    this->TargetType = EBoscoAbillityTargetPreference::Self;
    this->ExitStrategy = nullptr;
    this->CoolDown = 0.00f;
    this->WindUp = 0.00f;
    this->duration = 0.00f;
    this->Range = 0.00f;
    this->RechargeTime = 0.00f;
    this->MaxCharges = -1;
    this->TargetActorIfValid = false;
    this->RotateTowardsTarget = false;
}


