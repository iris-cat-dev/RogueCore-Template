#include "AIPlayerControlComponent.h"
#include "ControlEnemyUsable.h"

UAIPlayerControlComponent::UAIPlayerControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpeedTarget = 250.00f;
    this->SpeedMin = 50.00f;
    this->SpeedMax = 400.00f;
    this->AccelerationBase = 500.00f;
    this->AccelerationMultiplier = 1.00f;
    this->DecelerationMultiplier = 0.35f;
    this->AccelerationOnSlopeMultiplier = 1.50f;
    this->DecelerationOnSlopeMultiplier = 1.30f;
    this->InitialConnectionBlendTime = 0.30f;
    this->GetOnMontageAI = nullptr;
    this->GetOnMontagePlayer = nullptr;
    this->LetGoMontageAI = nullptr;
    this->LetGoMontagePlayer = nullptr;
    this->GetOnShout = nullptr;
    this->LetGoShout = nullptr;
    this->usable = CreateDefaultSubobject<UControlEnemyUsable>(TEXT("usable"));
}


