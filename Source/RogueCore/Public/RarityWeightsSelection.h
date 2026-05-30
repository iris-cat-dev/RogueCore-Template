#pragma once
#include "CoreMinimal.h"
#include "ERarityWeightType.h"
#include "RarityWeightsSelection.generated.h"

class URarityWeightsSettings;

USTRUCT(BlueprintType)
struct FRarityWeightsSelection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URarityWeightsSettings* DefaultRarityWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERarityWeightType, URarityWeightsSettings*> TypeRarityWeights;
    
public:
    ROGUECORE_API FRarityWeightsSelection();
};

