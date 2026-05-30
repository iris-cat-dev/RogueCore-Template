#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EnhancementLibrary.generated.h"

class UObject;
class UPerkAsset;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class UEnhancementLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEnhancementLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetEquippedEnhancements(const UObject* WorldContext, UPlayerCharacterID* Character, const TArray<UPerkAsset*>& Perks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UPerkAsset*> GetUnlockedEnhancements(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetTotalNumberOfEnhancementSlots(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetNumberOfUnlockedEnhancementSlots(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UPerkAsset*> GetEquippedEnhancements(const UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEnhancementSlotsUnlockPlayerRank(int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEnhancementSlotsUnlockMeritCost(int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static int32 GetEnhancementSlotsBought(const UObject* InWorldContext, const UPlayerCharacterID* InPlayerCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetAmountOfUnlockedEnhancements(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UPerkAsset*> GetAllEnhancements(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CanPlayerBuyEnhancementSlot(const UObject* WorldContext, const UPlayerCharacterID* PlayerClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void BuyEnhancementSlot(const UObject* InWorldContext, const UPlayerCharacterID* InPlayerCharacterID);
    
};

