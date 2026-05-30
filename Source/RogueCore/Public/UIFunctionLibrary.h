#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CoolDownProgressStyle.h"
#include "UIFunctionLibrary.generated.h"

class APlayerCharacter;
class UNewsTextLists;
class UObject;
class UPlayerCharacterID;
class UStageNameBank;

UCLASS(Blueprintable)
class UUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateCoolDownProgressStyle(UPARAM(Ref) FCoolDownProgressStyle& inRef, float Progress, UObject* progressOwner, APlayerCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void StartBugReporter();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32 loadoutIndex, int32 IconIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool MatchChildNotifications);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInItemUINotificationSet(UObject* WorldContextObject, UObject* Item);
    
    UFUNCTION(BlueprintPure)
    static int64 GetUnixTimeStamp();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32 loadoutIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FText> FormatNewsTexts(TArray<FText> texts, int32 RandomSeed, UNewsTextLists* wordList, UStageNameBank* missionNameBank);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllItemUINotifications(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void CheckItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool& HasNotification, bool MatchChildNotifications);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item);
    
};

