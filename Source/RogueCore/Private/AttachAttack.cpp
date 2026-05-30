#include "AttachAttack.h"

UAttachAttack::UAttachAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AdjustedOffset = 0.00f;
    this->LerpTime = 0.00f;
    this->TargetSettings = nullptr;
}

void UAttachAttack::All_StartLerp_Implementation(FVector From, FVector To) {
}


