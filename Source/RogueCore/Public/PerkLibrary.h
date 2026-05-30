#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PerkLibrary.generated.h"

class AActor;
class UPerkAsset;
class UPerkComponent;

UCLASS(Blueprintable)
class UPerkLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPerkLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetPerkUseCount(const AActor* Character, const UPerkAsset* Perk, const int32 NewUseCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetPerkCooldown(const AActor* Character, const UPerkAsset* Perk, const float NewCooldown);
    
    UFUNCTION(BlueprintCallable)
    static void SetPerkBlocked(const AActor* Character, const UPerkAsset* Perk, const bool IsBlocked);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaximumPerkUses(const AActor* Character, const UPerkAsset* Perk, const int32 MaximumUses);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPerkStates(const AActor* Character);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPerkState(const AActor* Character, const UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable)
    static void MarkPerkUsed(const AActor* Character, const UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRemainingPerkUses(const AActor* Character, const UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPerkUseCount(const AActor* Character, const UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPerkCooldownProgress(const AActor* Character, const UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPerkCooldown(const AActor* Character, const UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPerkComponent* GetPerkComponent(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaximumPerkUses(const AActor* Character, const UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UPerkAsset*> GetActivePerks(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UPerkAsset*> GetActiveEnhancements(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UPerkAsset*> GetActiveClassPerks(const AActor* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesCharacterHavePerk(const AActor* Character, const UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanCharacterUsePerk(const AActor* Character, const UPerkAsset* Perk);
    
};

