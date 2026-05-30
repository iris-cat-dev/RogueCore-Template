#pragma once
#include "CoreMinimal.h"
#include "ExcavationReward.h"
#include "RewardsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRewardsUpdated, const TArray<FExcavationReward>&, Rewards, const TArray<int32>&, Counts);

