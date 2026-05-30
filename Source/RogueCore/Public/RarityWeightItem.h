#pragma once
#include "CoreMinimal.h"
#include "RarityWeightItem.generated.h"

class UBXEUnlockRarity;

USTRUCT(BlueprintType)
struct FRarityWeightItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockRarity* Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelWeight;
    
    ROGUECORE_API FRarityWeightItem();
};

