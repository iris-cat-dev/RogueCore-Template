#include "PlayerCharacterFunctionLibrary.h"

UPlayerCharacterFunctionLibrary::UPlayerCharacterFunctionLibrary() {
}

void UPlayerCharacterFunctionLibrary::SetupLocalPlayerCameraLookAt(const UObject* WorldContext, const FVector LookFrom, const FVector LookAt) {
}

bool UPlayerCharacterFunctionLibrary::SetPlayerVoiceMuted(UObject* WorldContextObject, AFSDPlayerState* PlayerState, bool Mute, bool TrySystemWide, int32 localUserNum) {
    return false;
}

bool UPlayerCharacterFunctionLibrary::IsPlayerVoiceMuted(UObject* WorldContextObject, AFSDPlayerState* PlayerState, int32 localUserNum) {
    return false;
}

TArray<UPlayerCharacterID*> UPlayerCharacterFunctionLibrary::GetUsedPlayerCharacterIds(const UObject* WorldContext, const AFSDPlayerState* ExcludedPlayer) {
    return TArray<UPlayerCharacterID*>();
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetRandomPlayer(UObject* WorldContextObject, bool MustBeAlive, bool MustNotBeParalyzed, const bool IgnoreIncapacitated) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestVisiblePlayer(AActor* From, float MaxDistance, bool MustBeAlive, bool MustNotBeParalyzed, const bool IgnoreIncapacitated) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestPlayerToPosition(UObject* WorldContextObject, FVector position, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, const bool IgnoreIncapacitated, bool XYOnly) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestPlayerFrom(UObject* WorldContext, FVector From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, const bool IgnoreIncapacitated, bool XYOnly) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestPlayer(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, const bool IgnoreIncapacitated, bool XYOnly) {
    return NULL;
}

TArray<UPlayerCharacterID*> UPlayerCharacterFunctionLibrary::GetFreePlayerCharacterIds(const UObject* WorldContext, const AFSDPlayerState* ExcludedPlayer) {
    return TArray<UPlayerCharacterID*>();
}

int32 UPlayerCharacterFunctionLibrary::GetAmountOfMaxLevelPlayers(const UObject* WorldContext) const {
    return 0;
}

TArray<UPlayerCharacterID*> UPlayerCharacterFunctionLibrary::GetAllPlayerCharacterIds() {
    return TArray<UPlayerCharacterID*>();
}

TArray<AFSDPlayerState*> UPlayerCharacterFunctionLibrary::GetActivePlayerStates(const UObject* WorldContext) {
    return TArray<AFSDPlayerState*>();
}

TArray<APlayerCharacter*> UPlayerCharacterFunctionLibrary::GetActivePlayerCharacters(const UObject* WorldContext) {
    return TArray<APlayerCharacter*>();
}

FString UPlayerCharacterFunctionLibrary::FindPlayerNameWithCharacterId(const UObject* WorldContext, const UPlayerCharacterID* characterID, const AFSDPlayerState* ExcludedPlayer) {
    return TEXT("");
}

AFSDPlayerState* UPlayerCharacterFunctionLibrary::FindActivePlayerState(const UObject* WorldContext, const int32 PlayerId) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::FindActivePlayerCharacterWithCharacterId(const UObject* WorldContext, const UPlayerCharacterID* characterID) {
    return NULL;
}


