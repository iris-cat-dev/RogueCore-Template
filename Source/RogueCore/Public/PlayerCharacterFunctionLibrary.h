#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PlayerCharacterFunctionLibrary.generated.h"

class AActor;
class AFSDPlayerState;
class APlayerCharacter;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class UPlayerCharacterFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayerCharacterFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetupLocalPlayerCameraLookAt(const UObject* WorldContext, const FVector LookFrom, const FVector LookAt);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetPlayerVoiceMuted(UObject* WorldContextObject, AFSDPlayerState* PlayerState, bool Mute, bool TrySystemWide, int32 localUserNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerVoiceMuted(UObject* WorldContextObject, AFSDPlayerState* PlayerState, int32 localUserNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UPlayerCharacterID*> GetUsedPlayerCharacterIds(const UObject* WorldContext, const AFSDPlayerState* ExcludedPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerCharacter* GetRandomPlayer(UObject* WorldContextObject, bool MustBeAlive, bool MustNotBeParalyzed, const bool IgnoreIncapacitated);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerCharacter* GetNearestVisiblePlayer(AActor* From, float MaxDistance, bool MustBeAlive, bool MustNotBeParalyzed, const bool IgnoreIncapacitated);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerCharacter* GetNearestPlayerToPosition(UObject* WorldContextObject, FVector position, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, const bool IgnoreIncapacitated, bool XYOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static APlayerCharacter* GetNearestPlayerFrom(UObject* WorldContext, FVector From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, const bool IgnoreIncapacitated, bool XYOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerCharacter* GetNearestPlayer(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, const bool IgnoreIncapacitated, bool XYOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UPlayerCharacterID*> GetFreePlayerCharacterIds(const UObject* WorldContext, const AFSDPlayerState* ExcludedPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    int32 GetAmountOfMaxLevelPlayers(const UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UPlayerCharacterID*> GetAllPlayerCharacterIds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<AFSDPlayerState*> GetActivePlayerStates(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<APlayerCharacter*> GetActivePlayerCharacters(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FString FindPlayerNameWithCharacterId(const UObject* WorldContext, const UPlayerCharacterID* characterID, const AFSDPlayerState* ExcludedPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static AFSDPlayerState* FindActivePlayerState(const UObject* WorldContext, const int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static APlayerCharacter* FindActivePlayerCharacterWithCharacterId(const UObject* WorldContext, const UPlayerCharacterID* characterID);
    
};

