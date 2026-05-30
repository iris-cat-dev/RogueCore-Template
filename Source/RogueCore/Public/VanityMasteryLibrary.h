#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CraftingCost.h"
#include "VanityMasteryResult.h"
#include "VanityMasterySave.h"
#include "VanityMasterySettings.h"
#include "VanityMasteryLibrary.generated.h"

class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class UVanityMasteryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVanityMasteryLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ResetVanityMasteryXP(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVanityMasterySettings GetVanityMasterySettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FVanityMasterySave GetVanityMasterySave(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetVanityMasteryFashioniteForLevel(int32 InCurrentLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateVanityMasteryLevelProgress(int32 Level, int32 XP);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FVanityMasteryResult AddVanityMasteryXPFromCost(UObject* WorldContext, TArray<FCraftingCost> Cost, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FVanityMasteryResult AddVanityMasteryXP(UObject* WorldContext, int32 XP, UPlayerCharacterID* PlayerId);
    
};

