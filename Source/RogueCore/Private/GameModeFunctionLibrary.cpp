#include "GameModeFunctionLibrary.h"

UGameModeFunctionLibrary::UGameModeFunctionLibrary() {
}

void UGameModeFunctionLibrary::SetGamePausedWithReason(const UObject* WorldContext, EPauseReason pauseReason) {
}

bool UGameModeFunctionLibrary::IsCloseToImportantLocation(AFSDGameState* GameState, const FVector& Location) {
    return false;
}

FTransform UGameModeFunctionLibrary::FindEscapePodLocationAtDistance(UObject* WorldContextObject, float Distance, float AboveDistanceBias, AActor* OptionalFrom) {
    return FTransform{};
}

void UGameModeFunctionLibrary::ClearGamePausedWithReason(const UObject* WorldContext, EPauseReason pauseReason) {
}

bool UGameModeFunctionLibrary::AreAllMissionEndResultsReceived(const UObject* WorldContext) {
    return false;
}

void UGameModeFunctionLibrary::AddSeamlessTravelEventKey(UObject* WorldContextObject, USeamlessTravelEventKey* Key) {
}


