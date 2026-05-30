#include "BXENegotiationData.h"

FBXENegotiationData::FBXENegotiationData() {
    this->NegotiationId = 0;
    this->bNegotiating = false;
    this->SkipUnlock = nullptr;
    this->ActiveParticipant = 0;
    this->LastActiveParticipant = 0;
    this->Timeout = 0;
    this->Level = 0;
    this->NegotiationCompleteStat = nullptr;
    this->TelemetryIdentifier = FString();
    this->PausedByPlayer = nullptr;
}

