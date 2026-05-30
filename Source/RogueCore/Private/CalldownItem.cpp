#include "CalldownItem.h"

ACalldownItem::ACalldownItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemPlacerClass = nullptr;
    this->SupplyPodClass = nullptr;
    this->ResouceRequired = nullptr;
    this->ResupplyBeacon = nullptr;
    this->ItemPlacerInstance = nullptr;
    this->CoolDown = 0.00f;
    this->CooldownRemaining = 0.00f;
}

void ACalldownItem::Server_Call_Resupply_Implementation(const FVector& Location) {
}


