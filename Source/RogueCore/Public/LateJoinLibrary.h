#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "LateJoinState.h"
#include "LateJoinLibrary.generated.h"

class AFSDPlayerState;
class ALateJoinPlayerStart;
class APlayerController;
class APlayerState;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class ULateJoinLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULateJoinLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetLateJoinActive(const UObject* WorldContext, const bool NewActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyLateJoinTentacleStageActive(const UObject* WorldContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyLateJoinTeamHaveWeapons(const UObject* WorldContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyLateJoinTeamHaveGrenades(const UObject* WorldContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyLateJoinStageTimerStarted(const UObject* WorldContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyLateJoinNegotiationActive(const UObject* WorldContext, const bool IsActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyLateJoinExitButtonPressed(const UObject* WorldContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyLateJoinEntranceDoorOpened(const UObject* WorldContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NotifyLateJoinBarrierDronesBuilt(const UObject* WorldContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsPlayerAllowedForRejoin(const UObject* WorldContext, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsLateJoinActive(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaximumAmountOfConnectedPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FLateJoinState GetLateJoinState(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<ALateJoinPlayerStart*> GetAvailableLateJoinPlayerStarts(const UObject* WorldContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static ALateJoinPlayerStart* FindLateJoinPlayerStartForPlayer(const UObject* WorldContext, const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static ALateJoinPlayerStart* FindAvailableLateJoinPlayerStart(const UObject* WorldContext, const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 FindAmountOfActiveAndInactivePlayers(const UObject* WorldContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<AFSDPlayerState*> FindActiveAndInactivePlayerStates(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<UPlayerCharacterID*> FindActiveAndInactivePlayerClasses(const UObject* WorldContext, const APlayerState* ExcludedPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool DoesGameHaveRoomForMorePlayers(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CanReJoinPlayersSpawn(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CanLateJoinPlayersSpawn(const UObject* WorldContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool AreLateJoinPlayersAllowed(const UObject* WorldContext);
    
};

