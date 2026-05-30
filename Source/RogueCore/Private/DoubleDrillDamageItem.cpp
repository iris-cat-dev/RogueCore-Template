#include "DoubleDrillDamageItem.h"

FDoubleDrillDamageItem::FDoubleDrillDamageItem() {
    this->Material = nullptr;
    this->BoneIndex = 0;
    this->Target = nullptr;
    this->Location = FVector::ZeroVector;
    this->Normal = FVector::ZeroVector;
    this->BoneName = FName();
}

