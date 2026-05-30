#pragma once
#include "CoreMinimal.h"
#include "RewardDispenserReward.generated.h"

class UDataAsset;

USTRUCT(BlueprintType)
struct FRewardDispenserReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataAsset* Reward;
    
    ROGUECORE_API FRewardDispenserReward();
};

