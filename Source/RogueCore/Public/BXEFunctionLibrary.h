#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BXEUnlockInstance.h"
#include "VoteOptionInstance.h"
#include "BXEFunctionLibrary.generated.h"

class UBXEProgressionSettings;
class UBXESettings;
class UBXEStartingWeapon;
class UBXEUnlockBase;
class UItemID;
class UObject;
class URunManager;
class UTexture2D;
class UWeaponTagBase;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBXEFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetVoteOptionInstanceDescription(const FVoteOptionInstance& VoteOptionInstance, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetVoteOptionHeaderImage(const FVoteOptionInstance& VoteOptionInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UWeaponTagBase*> GetUnlockInstanceWeaponTags(const FBXEUnlockInstance& UnlockInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetUnlockInstanceFunctionalDescription(const FBXEUnlockInstance& UnlockInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetUnlockInstanceDescription(const FBXEUnlockInstance& UnlockInstance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UBXEStartingWeapon*> GetStartingWeapons(UObject* WorldContextObject, bool getUnlockedWeapons, bool getLockedWeapons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static URunManager* GetRunManager(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UWeaponTagBase*> GetItemIDWeaponTags(UItemID* InItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBXEStartingWeapon* GetEquippedStartingWeapon(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBXESettings* GetBXESettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBXEProgressionSettings* GetBXEProgressionSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static TArray<UBXEUnlockBase*> GetAllItemUnlocksForAllPlayers(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ContainsWeaponTags(const TArray<UWeaponTagBase*>& Source, const TArray<UWeaponTagBase*>& Other, bool& hasAnyMatch, int32& numberOfMatches);
    
};

