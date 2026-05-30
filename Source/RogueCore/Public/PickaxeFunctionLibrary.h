#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPickaxePartLocation.h"
#include "PickaxeSet.h"
#include "PickaxeFunctionLibrary.generated.h"

class UObject;
class UPickaxePart;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class UPickaxeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPickaxeFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RemovePickaxePartFromOwned(UObject* WorldContextObject, const UPickaxePart* part);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RandomizePickaxe(UObject* WorldContextObject, UPlayerCharacterID* PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPickaxePartEquipped(UObject* WorldContextObject, EPickaxePartLocation Location, UPickaxePart* part, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GivePickaxePart(UObject* WorldContextObject, UPickaxePart* part);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UPickaxePart*> GetUnlockedPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UPickaxePart*> GetPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsPickAxePartAcquired(UObject* WorldContextObject, const UPickaxePart* InPickaxePart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FPickaxeSet GetEquippedPickaxeSet(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPickaxePart* GetEquippedPickaxePart(UObject* WorldContextObject, EPickaxePartLocation partLocation, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EquipPickaxePart(UObject* WorldContextObject, UPickaxePart* part, EPickaxePartLocation partLocation, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CopyPastePickaxeLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex);
    
};

