#include "DebrisVeinComponent.h"

UDebrisVeinComponent::UDebrisVeinComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Material = nullptr;
    this->CarverType = EDebrisCarvedType::Large;
    this->VeinCreator = nullptr;
}


