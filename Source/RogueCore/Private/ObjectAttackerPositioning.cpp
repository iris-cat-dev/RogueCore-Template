#include "ObjectAttackerPositioning.h"

UObjectAttackerPositioning::UObjectAttackerPositioning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FreePositions.AddDefaulted(32);
    this->FlyingFreePositions.AddDefaulted(32);
    this->Health = nullptr;
    this->TargetableByFlying = true;
    this->TargetableByShooting = true;
}

void UObjectAttackerPositioning::SetMaxAttackers(int32 newMaxAttackers) {
}


