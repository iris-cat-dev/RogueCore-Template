#include "LateJoinLibrary.h"

ULateJoinLibrary::ULateJoinLibrary() {
}

void ULateJoinLibrary::SetLateJoinActive(const UObject* WorldContext, const bool NewActive) {
}

void ULateJoinLibrary::NotifyLateJoinTentacleStageActive(const UObject* WorldContext) {
}

void ULateJoinLibrary::NotifyLateJoinTeamHaveWeapons(const UObject* WorldContext) {
}

void ULateJoinLibrary::NotifyLateJoinTeamHaveGrenades(const UObject* WorldContext) {
}

void ULateJoinLibrary::NotifyLateJoinStageTimerStarted(const UObject* WorldContext) {
}

void ULateJoinLibrary::NotifyLateJoinNegotiationActive(const UObject* WorldContext, const bool IsActive) {
}

void ULateJoinLibrary::NotifyLateJoinExitButtonPressed(const UObject* WorldContext) {
}

void ULateJoinLibrary::NotifyLateJoinEntranceDoorOpened(const UObject* WorldContext) {
}

void ULateJoinLibrary::NotifyLateJoinBarrierDronesBuilt(const UObject* WorldContext) {
}

bool ULateJoinLibrary::IsPlayerAllowedForRejoin(const UObject* WorldContext, const FUniqueNetIdRepl& PlayerId) {
    return false;
}

bool ULateJoinLibrary::IsLateJoinActive(const UObject* WorldContext) {
    return false;
}

int32 ULateJoinLibrary::GetMaximumAmountOfConnectedPlayers() {
    return 0;
}

FLateJoinState ULateJoinLibrary::GetLateJoinState(const UObject* WorldContext) {
    return FLateJoinState{};
}

TArray<ALateJoinPlayerStart*> ULateJoinLibrary::GetAvailableLateJoinPlayerStarts(const UObject* WorldContext) {
    return TArray<ALateJoinPlayerStart*>();
}

ALateJoinPlayerStart* ULateJoinLibrary::FindLateJoinPlayerStartForPlayer(const UObject* WorldContext, const APlayerController* PlayerController) {
    return NULL;
}

ALateJoinPlayerStart* ULateJoinLibrary::FindAvailableLateJoinPlayerStart(const UObject* WorldContext, const APlayerController* PlayerController) {
    return NULL;
}

int32 ULateJoinLibrary::FindAmountOfActiveAndInactivePlayers(const UObject* WorldContext) {
    return 0;
}

TArray<AFSDPlayerState*> ULateJoinLibrary::FindActiveAndInactivePlayerStates(const UObject* WorldContext) {
    return TArray<AFSDPlayerState*>();
}

TArray<UPlayerCharacterID*> ULateJoinLibrary::FindActiveAndInactivePlayerClasses(const UObject* WorldContext, const APlayerState* ExcludedPlayer) {
    return TArray<UPlayerCharacterID*>();
}

bool ULateJoinLibrary::DoesGameHaveRoomForMorePlayers(const UObject* WorldContext) {
    return false;
}

bool ULateJoinLibrary::CanReJoinPlayersSpawn(const UObject* WorldContext) {
    return false;
}

bool ULateJoinLibrary::CanLateJoinPlayersSpawn(const UObject* WorldContext) {
    return false;
}

bool ULateJoinLibrary::AreLateJoinPlayersAllowed(const UObject* WorldContext) {
    return false;
}


