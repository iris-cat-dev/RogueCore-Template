#include "WeaponTagContainerComponent.h"

UWeaponTagContainerComponent::UWeaponTagContainerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RangeTag = nullptr;
    this->TypeTag = nullptr;
    this->TechTag = nullptr;
}


