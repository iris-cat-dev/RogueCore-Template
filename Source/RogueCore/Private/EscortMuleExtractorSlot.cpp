#include "EscortMuleExtractorSlot.h"

FEscortMuleExtractorSlot::FEscortMuleExtractorSlot() {
    this->ExtractorState = EEscortExtractorState::ReadyToGrab;
    this->LastState = EEscortExtractorState::ReadyToGrab;
    this->AttachPoint = nullptr;
    this->usable = nullptr;
    this->Widget = nullptr;
}

