#include "EscortMuleAttackerPositioning.h"

UEscortMuleAttackerPositioning::UEscortMuleAttackerPositioning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FreePositions.AddDefaulted(32);
    this->FlyingFreePositions.AddDefaulted(32);
    this->Health = nullptr;
}

void UEscortMuleAttackerPositioning::SetCostModifier(float Modifier) {
}


