#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockCollection.h"
#include "UnlockWithRarityIdentifier.h"
#include "BXEUnlockPool.generated.h"

class UBXEUnlockBase;

UCLASS(Blueprintable)
class ROGUECORE_API UBXEUnlockPool : public UBXEUnlockCollection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UBXEUnlockBase*> Unlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* SkipReward;
    
public:
    UBXEUnlockPool();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<UBXEUnlockBase*> GetUnlocks();
    
    UFUNCTION(BlueprintCallable)
    TArray<FUnlockWithRarityIdentifier> GetRaritySortedUnlocks();
    
};

