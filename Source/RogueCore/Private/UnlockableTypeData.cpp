#include "UnlockableTypeData.h"

FUnlockableTypeData::FUnlockableTypeData() {
    this->count = 0;
    this->Unlock = FGuid();
    this->Rarity = FGuid();
    this->ItemID = FGuid();
    this->SelectedSlot = FItemSlotIndex();
}

