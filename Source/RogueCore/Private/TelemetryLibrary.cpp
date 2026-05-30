#include "TelemetryLibrary.h"

UTelemetryLibrary::UTelemetryLibrary() {
}

void UTelemetryLibrary::NotifyTelemetryWorkbenchPickWeapon(const UObject* WorldContext, const FTelemetryWorkbenchPicks& PickableOptions, const int32 PickIndex) {
}

void UTelemetryLibrary::NotifyTelemetryWorkbenchPickAttribute(const UObject* WorldContext, const FTelemetryWorkbenchPicks& PickableOptions, const int32 PickIndex) {
}

void UTelemetryLibrary::NotifyTelemetryWorkbenchPickAbilityUpgrade(const UObject* WorldContext, const FTelemetryWorkbenchPicks& PickableOptions, const int32 PickIndex) {
}

void UTelemetryLibrary::NotifyTelemetryStageEndElevatorCalled(const UObject* WorldContext) {
}

void UTelemetryLibrary::NotifyTelemetryStageEndElevatorArrived(const UObject* WorldContext) {
}

void UTelemetryLibrary::NotifyTelemetryRunEndRating(const UObject* WorldContext, const FGuid RunId, const ERunDepth RunDepth, const FString& rating, const FString& PickedQuestionOption) {
}

void UTelemetryLibrary::NotifyTelemetryRockAndStone(const UObject* WorldContext, const UPlayerCharacterID* PlayerClass) {
}

void UTelemetryLibrary::NotifyTelemetryPromotionBought(const UObject* WorldContext, const int32 PromotionLevel, const UPlayerCharacterID* PromotedClass) {
}

void UTelemetryLibrary::NotifyTelemetryPlayerDeath(const UObject* WorldContext, const FString& Cause, const int32 SecondsSinceLastDamageTaken, const int32 SecondsSinceLastRevive) {
}

void UTelemetryLibrary::NotifyTelemetryPickRiskVector(const UObject* WorldContext, const FVoteData& Vote, const int32 MyVoteIndex) {
}

void UTelemetryLibrary::NotifyTelemetryLevelLoad(const UObject* WorldContext, const float LoadTimeInSeconds) {
}

void UTelemetryLibrary::NotifyTelemetryEnhancementBought(const UObject* WorldContext, const UPerkAsset* enhancement) {
}

void UTelemetryLibrary::NotifyTelemetryBioBoosterPick(const UObject* WorldContext, const TArray<UBXEUnlockBase*>& PickableOptions, const UBXEUnlockBase* PickedOption) {
}


