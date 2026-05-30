#include "ElementEventState.h"

FElementEventState::FElementEventState() {
    this->EventType = nullptr;
    this->TriggeredByElementType = nullptr;
    this->Source = nullptr;
    this->StartTime = 0.00f;
    this->LockDuration = 0.00f;
}

