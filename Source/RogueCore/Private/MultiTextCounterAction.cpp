#include "MultiTextCounterAction.h"

UMultiTextCounterAction::UMultiTextCounterAction() {
    this->TotalBlock = nullptr;
    this->CountSpeed = 0.00f;
    this->CountingSound = nullptr;
    this->AudioComponent = nullptr;
    this->WorldContext = nullptr;
}

UMultiTextCounterAction* UMultiTextCounterAction::StartMultiTextCounter(UObject* InWorldContext, UTextBlock* InTotalBlock, const FText InTotalFormat, float InCountSpeed, USoundCue* InCountingSound, const TArray<FTextCounterEntry> InEntries) {
    return NULL;
}


