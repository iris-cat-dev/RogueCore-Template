#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "LevelRarityWeights.h"
#include "RarityWeightsSettings.generated.h"

UCLASS(Blueprintable)
class URarityWeightsSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelRarityWeights> RarityLevels;
    
public:
    URarityWeightsSettings();

};

