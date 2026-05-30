#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VanityFunctionLibrary.generated.h"

class APlayerCharacter;
class AVanityCharacter;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class ROGUECORE_API UVanityFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVanityFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RandomizeVanityLoadout(UObject* WorldContextObject, APlayerCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void RandomizeAllRandomVanityLoadout(APlayerCharacter* currentCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopyPasteVanityLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPlayerVanityToVanityCharacter(const APlayerCharacter* PlayerCharacterToCopyFrom, AVanityCharacter* VanityCharacterToApplyTo);
    
};

