#include "RewindData.h"

FRewindData::FRewindData() {
    this->MovementMode = MOVE_None;
    this->ActiveZipline = nullptr;
    this->Health = 0.00f;
    this->Armor = 0.00f;
    this->TempHealth = 0.00f;
    this->PowerAttackCooldown = 0.00f;
    this->CharacterState = ECharacterState::Walking;
    this->Transform = FTransform::Identity;
    this->ZiplineStart = FVector::ZeroVector;
    this->ZiplineEnd = FVector::ZeroVector;
    this->ControlRotation = FRotator::ZeroRotator;
    this->Velocity = FVector::ZeroVector;
}

