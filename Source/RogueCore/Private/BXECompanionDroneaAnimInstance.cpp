#include "BXECompanionDroneaAnimInstance.h"

UBXECompanionDroneaAnimInstance::UBXECompanionDroneaAnimInstance() {
    this->MinFlairCooldown = 1.00f;
    this->MaxFlairCooldown = 1.00f;
    this->HorizontalAngularSpeed = 0.00f;
    this->VerticalAngularSpeed = 0.00f;
    this->Velocity = 0.00f;
    this->UpAgnle = 0.00f;
    this->DepositPlayRate = 0.00f;
    this->State = EBXECompanionDroneState::Following;
    this->Landed = false;
    this->Dispensing = false;
    this->Depositable = false;
    this->HasArtifact = false;
    this->HasPotentExpenite = false;
    this->HasProcessedArtifact = false;
    this->HasProcessedPotent = false;
}


