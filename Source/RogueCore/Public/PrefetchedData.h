#pragma once
#include "CoreMinimal.h"
#include "DamageBonuses.h"
#include "PrefetchedData.generated.h"

USTRUCT(BlueprintType)
struct FPrefetchedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageBonuses> PrefetchedBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrefetchedCritChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
    ROGUECORE_API FPrefetchedData();
};

