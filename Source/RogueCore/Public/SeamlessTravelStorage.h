#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "PlayerDataStorage.h"
#include "SeamlessTravelLevelEndState.h"
#include "SeamlessTravelStorage.generated.h"

class AActor;
class APlayerCharacter;
class APlayerState;
class UDifficultySetting;
class UPlayer;
class UResourceData;
class USeamlessTravelEventKey;

UCLASS(Blueprintable)
class USeamlessTravelStorage : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDifficultySetting* ChosenDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPlayer*, bool> PlayerShouldStartInMedbay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MissionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> StoredFloatValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> StoredIntValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<USeamlessTravelEventKey*> EventKeys;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FPlayerDataStorage> StoredPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> OtherStoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> SeamlessTravelPlayerStates;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeamlessTravelLevelEndState LastLevelEndState;
    
public:
    USeamlessTravelStorage();

    UFUNCTION(BlueprintCallable)
    void UnStoreActorForSeamlessTravel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void StoreActorForSeamlessTravel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APlayerCharacter*> GetStoredCharacters() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearStageState();
    
    UFUNCTION(BlueprintCallable)
    void ClearPersistentState();
    
    UFUNCTION(BlueprintCallable)
    void ClearCharacterState();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllState();
    
};

