#include "Gem.h"
#include "CarriableInstantUsable.h"

AGem::AGem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->usable = CreateDefaultSubobject<UCarriableInstantUsable>(TEXT("usable"));
    this->ResourceType = nullptr;
    this->SpawnedByObjective = nullptr;
    this->OverrideResourceAmount = -1.00f;
    this->ResourceAmount = 1.00f;
    this->hasBeenReleased = false;
}

void AGem::SetResourceAmount(float Amount) {
}

void AGem::SetHasBeenReleased(bool NewHasBeenReleased) {
}

bool AGem::GetHasBeenReleased() const {
    return false;
}


