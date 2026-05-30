#pragma once
#include "CoreMinimal.h"
#include "ERarityWeightType.h"
#include "SavablePrimaryDataAsset.h"
#include "BXEUnlockCollection.generated.h"

class UBXEUnlockBase;
class UCollectionConditionBase;
class UMissionStat;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UBXEUnlockCollection : public USavablePrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERarityWeightType RarityWeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCollectionConditionBase*> CollectionConditions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* NegotiationCompleteStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddDroneUnlocks;
    
public:
    UBXEUnlockCollection();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkipRewards(TArray<UBXEUnlockBase*>& OutSkipRewards) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllUnlocks(TSet<UBXEUnlockBase*>& OutAllUnlocks) const;
    
};

