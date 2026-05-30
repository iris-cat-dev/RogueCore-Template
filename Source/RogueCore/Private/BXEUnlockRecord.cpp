#include "BXEUnlockRecord.h"

FBXEUnlockRecord::FBXEUnlockRecord() {
    this->Level = 0;
    this->bAppliedToPlayer = false;
    this->UnlockInstance = FBXEUnlockInstance();
    this->Slot = FItemSlotIndex();
}

