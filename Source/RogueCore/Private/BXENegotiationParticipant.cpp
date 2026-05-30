#include "BXENegotiationParticipant.h"

FBXENegotiationParticipant::FBXENegotiationParticipant() {
    this->SelectedIndex = 0;
    this->RequestedIndex = 0;
    this->SelectedDroneUnlockIndex = 0;
    this->PlayerState = nullptr;
    this->SelectedSlot = FItemSlotIndex();
    this->SelectedUnlock = FBXEUnlockInstance();
}

