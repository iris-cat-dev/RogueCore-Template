#include "IntelLibrary.h"

UIntelLibrary::UIntelLibrary() {
}

UStageDuration* UIntelLibrary::GetUnlockedDuration(const UIntelObjective* IntelObjective) {
    return NULL;
}

ERunDepth UIntelLibrary::GetUnlockedDepth(const UIntelObjective* IntelObjective) {
    return ERunDepth::None;
}

UStageComplexity* UIntelLibrary::GetUnlockedComplexity(const UIntelObjective* IntelObjective) {
    return NULL;
}

TArray<UBiome*> UIntelLibrary::GetUnlockedBiomes(const UIntelObjective* IntelObjective) {
    return TArray<UBiome*>();
}

UDialogDataAsset* UIntelLibrary::GetMissionControlShoutFromIntel(const UObject* WorldContext) {
    return NULL;
}

UIntelObjective* UIntelLibrary::FindIntelObjectiveThatUnlocksDepth(const UObject* WorldContext, const ERunDepth Depth) {
    return NULL;
}

int32 UIntelLibrary::ComputeUnlockedIntelPoints(const FIntelProgression& IntelProgress) {
    return 0;
}

TArray<UIntelObjective*> UIntelLibrary::ComputeUnlockableIntelObjectives(const UObject* WorldContext, const FIntelProgression& IntelProgress) {
    return TArray<UIntelObjective*>();
}

TArray<UBiome*> UIntelLibrary::ComputeUnlockableBiomeObjectives(const UObject* WorldContext, const FIntelProgression& IntelProgress) {
    return TArray<UBiome*>();
}


