#pragma once
#include "CoreMinimal.h"
#include "GenericRewardDispenser.h"
#include "RewardDispenserReward.h"
#include "EventRewardDispenser.generated.h"

UCLASS(Blueprintable)
class AEventRewardDispenser : public AGenericRewardDispenser {
    GENERATED_BODY()
public:
    AEventRewardDispenser(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSelectedReward(FRewardDispenserReward InReward);
    
};

