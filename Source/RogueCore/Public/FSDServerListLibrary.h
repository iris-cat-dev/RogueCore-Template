#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FSDBlueprintSessionResult.h"
#include "EFSDServerListLobbySortOrder.h"
#include "ServerListLobby.h"
#include "ServerListLobbyStatus.h"
#include "FSDServerListLibrary.generated.h"

class UIntelObjective;
class UObject;

UCLASS(Blueprintable)
class UFSDServerListLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDServerListLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SortLobbies(const UObject* WorldContext, const TArray<FServerListLobby>& Lobbies, const TArray<FServerListLobbyStatus>& LobbiesStatus, const EFSDServerListLobbySortOrder SortOrder, const bool Reverse, const bool KeepFriendsFirst, const bool KeepJoinableFirst, TArray<FServerListLobby>& SortedLobbies, TArray<FServerListLobbyStatus>& SortedLobbiesStatus);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ResetSaveGameRejoinId(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveRejoinLobby(UPARAM(Ref) TArray<FServerListLobby>& Lobbies, UPARAM(Ref) TArray<FServerListLobbyStatus>& LobbiesStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UIntelObjective* FindMissingIntelObjectiveForLobby(const UObject* WorldContext, const FServerListLobby& Lobby);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFSDBlueprintSessionResult CreateSearchSessionFromLobby(const FServerListLobby& Lobby);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FServerListLobbyStatus ComputeLobbyStatus(const UObject* WorldContext, const FServerListLobby& Lobby);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<FServerListLobbyStatus> ComputeLobbiesStatus(const UObject* WorldContext, const TArray<FServerListLobby>& Lobbies);
    
};

