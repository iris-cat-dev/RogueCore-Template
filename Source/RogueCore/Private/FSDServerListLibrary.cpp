#include "FSDServerListLibrary.h"

UFSDServerListLibrary::UFSDServerListLibrary() {
}

void UFSDServerListLibrary::SortLobbies(const UObject* WorldContext, const TArray<FServerListLobby>& Lobbies, const TArray<FServerListLobbyStatus>& LobbiesStatus, const EFSDServerListLobbySortOrder SortOrder, const bool Reverse, const bool KeepFriendsFirst, const bool KeepJoinableFirst, TArray<FServerListLobby>& SortedLobbies, TArray<FServerListLobbyStatus>& SortedLobbiesStatus) {
}

void UFSDServerListLibrary::ResetSaveGameRejoinId(const UObject* WorldContext) {
}

void UFSDServerListLibrary::RemoveRejoinLobby(TArray<FServerListLobby>& Lobbies, TArray<FServerListLobbyStatus>& LobbiesStatus) {
}

UIntelObjective* UFSDServerListLibrary::FindMissingIntelObjectiveForLobby(const UObject* WorldContext, const FServerListLobby& Lobby) {
    return NULL;
}

FFSDBlueprintSessionResult UFSDServerListLibrary::CreateSearchSessionFromLobby(const FServerListLobby& Lobby) {
    return FFSDBlueprintSessionResult{};
}

FServerListLobbyStatus UFSDServerListLibrary::ComputeLobbyStatus(const UObject* WorldContext, const FServerListLobby& Lobby) {
    return FServerListLobbyStatus{};
}

TArray<FServerListLobbyStatus> UFSDServerListLibrary::ComputeLobbiesStatus(const UObject* WorldContext, const TArray<FServerListLobby>& Lobbies) {
    return TArray<FServerListLobbyStatus>();
}


