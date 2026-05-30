#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "SeamlessTravelLevelEndState.h"
#include "GameFunctionLibrary.generated.h"

class ADeepCSGWorld;
class AFSDGameMode;
class AFSDGameModeSpaceRig;
class AFSDGameState;
class AFSDPlayerController;
class AFSDWorldSettings;
class APlayerCharacter;
class UAbilityData;
class UAsyncManager;
class UAudioComponent;
class UCampaignManager;
class UFSDGameInstance;
class UFSDSaveGame;
class UGameData;
class UObject;
class UPlayerCharacterData;
class UPlayerCharacterID;
class URunManager;
class USoundBase;
class UWindowManager;
class UWindowWidget;

UCLASS(Blueprintable)
class ROGUECORE_API UGameFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SpawnOrUpdateAudio2D(UObject* WorldContext, UPARAM(Ref) UAudioComponent*& AudioComponent, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, FName FloatParamName, float FloatParam);
    
    UFUNCTION(BlueprintCallable)
    static void SetUsePushToTalk(bool Enable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalGravityZ(UObject* WorldContextObject, float GravityZ);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalGravityScale(UObject* WorldContextObject, float GravityScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldTickEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWithEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsTearingDown(UObject* caller, bool& NewIsTearingDown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayingOffline(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayInEditor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsGameMarkedModded(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsGameDetectedModded(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static bool IsEditorOnlyWorld(const UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWindowManager* GetWindowManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUsePushToTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWindowWidget* GetTopWindow(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URunManager* GetRunManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumPlayers(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumAdditionalPlayers(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMajorProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static AFSDPlayerController* GetLocalPlayerController(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UPlayerCharacterID* GetLocalPlayerCharacterID(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UPlayerCharacterData* GetLocalPlayerCharacterData(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UAbilityData* GetLocalPlayerCharacterAbilityData(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static APlayerCharacter* GetLocalPlayerCharacter(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FSeamlessTravelLevelEndState GetLastLevelEndState(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetGlobalGravityZ(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFSDWorldSettings* GetFSDWorldSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFSDGameModeSpaceRig* GetFSDSRGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFSDSaveGame* GetFSDSaveGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFSDGameState* GetFSDGameState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFSDGameMode* GetFSDGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFSDGameInstance* GetFSDGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameData* GetFSDGameData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetFrameRateInHz(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADeepCSGWorld* GetCSGWorld(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetChangelist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCampaignManager* GetCampaingManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAsyncManager* GetAsyncManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAbilityData* GetAbilityDataFromCharacterID(const UPlayerCharacterID* InCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_UniqueNetId(const FUniqueNetIdRepl& IdA, const FUniqueNetIdRepl& IdB);
    
};

