#pragma once
#include "CoreMinimal.h"
#include "RarityWeightItem.h"
#include "LevelRarityWeights.generated.h"

USTRUCT(BlueprintType)
struct FLevelRarityWeights {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRarityWeightItem> RarityLevelItems;
    
public:
    ROGUECORE_API FLevelRarityWeights();
};

