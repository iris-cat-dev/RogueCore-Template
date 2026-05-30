#include "ElementState.h"

FElementState::FElementState() {
    this->ElementType = nullptr;
    this->CurrentValue = 0.00f;
    this->ServerLockTime = 0.00f;
    this->ServerLockDuration = 0.00f;
    this->Stacks = 0;
    this->ResistanceIndex = 0;
    this->LocalLastChangeDelta = 0.00f;
}

