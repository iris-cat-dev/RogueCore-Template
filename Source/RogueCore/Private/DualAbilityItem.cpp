#include "DualAbilityItem.h"

ADualAbilityItem::ADualAbilityItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FPSuitMesh2 = nullptr;
    this->TPSuitMesh2 = nullptr;
    this->Item_EquippedSecondaryMontage = nullptr;
    this->Item_EquippedSecondaryUnavailable = nullptr;
}


