#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BXEUnlockInstance.h"
#include "BXEUnlockRecord.h"
#include "EUnlockType.h"
#include "BXEUnlockInstanceLibrary.generated.h"

class UBXEUnlockBase;
class UBXEUnlockRarity;
class UBioBoosterDeck;
class UObject;
class UPlayerCharacterID;
class UUnlockVisualSettings;

UCLASS(Blueprintable)
class UBXEUnlockInstanceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBXEUnlockInstanceLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<UBioBoosterDeck*> SortBioBoosterDecks(const TArray<UBioBoosterDeck*>& DecksToSort, const UPlayerCharacterID* CharacterToMoveToTop);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void PlayUnlockInstanceSelectedSound2D(const UObject* WorldContext, const FBXEUnlockInstance& UnlockInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UBXEUnlockBase*> GetUnlocksFromUnlockRecords(const TArray<FBXEUnlockRecord>& UnlockRecords);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UBXEUnlockBase*> GetUnlocksFromUnlockInstances(const TArray<FBXEUnlockInstance>& UnlockInstances);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FBXEUnlockRecord> GetUnlockRecordsOfType(const TArray<FBXEUnlockRecord>& UnlockRecords, const EUnlockType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUnlockVisualSettings* GetUnlockInstanceVisualSettings(const FBXEUnlockInstance& UnlockInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUnlockType GetUnlockInstanceType(const FBXEUnlockInstance& UnlockInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FBXEUnlockInstance> GetUnlockInstancesOfType(const TArray<FBXEUnlockInstance>& UnlockInstances, const EUnlockType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBXEUnlockRarity* GetUnlockInstanceRarity(const FBXEUnlockInstance& UnlockInstance);
    
};

