#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VanityLibrary.generated.h"

class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class UVanityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVanityLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetDoesVanityArmorPaintApplyToUndersuit(const UObject* WorldContext, UPlayerCharacterID* Character, const bool Paints);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetDoesVanityArmorPaintApplyToGauntlets(const UObject* WorldContext, UPlayerCharacterID* Character, const bool Paints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool DoesVanityArmorPaintApplyToUndersuit(const UObject* WorldContext, UPlayerCharacterID* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool DoesVanityArmorPaintApplyToGauntlets(const UObject* WorldContext, UPlayerCharacterID* Character);
    
};

