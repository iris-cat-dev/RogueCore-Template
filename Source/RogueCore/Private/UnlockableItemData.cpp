#include "UnlockableItemData.h"

FUnlockableItemData::FUnlockableItemData() {
    this->ItemID = nullptr;
    this->DamageIndex = 0;
    this->Unlock = FBXEUnlockInstance();
    this->SelectedSlot = FItemSlotIndex();
}

