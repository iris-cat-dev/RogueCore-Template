#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BXEUnlockInstance.h"
#include "ERarityWeightType.h"
#include "BXEUnlockCollectionLibrary.generated.h"

class UBXEUnlockBase;
class UObject;
class UUnlockCollectionTag;

UCLASS(Blueprintable)
class UBXEUnlockCollectionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBXEUnlockCollectionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FBXEUnlockInstance> PickRandomUnlocksFromTag(UObject* WorldContextObject, UUnlockCollectionTag* InTag, int32 InCount, const TArray<UBXEUnlockBase*>& ExcludedUnlocks, const ERarityWeightType RarityWeightOverride);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUnlockCollectionTag*> GetAllUnlockCollectionTags();
    
};

