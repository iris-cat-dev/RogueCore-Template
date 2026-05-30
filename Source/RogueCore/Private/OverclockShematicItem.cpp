#include "OverclockShematicItem.h"

UOverclockShematicItem::UOverclockShematicItem() {
    this->OwningItem = nullptr;
    this->Overclock = nullptr;
}

UUpgradableGearComponent* UOverclockShematicItem::GetOwningGearComponent() const {
    return NULL;
}


