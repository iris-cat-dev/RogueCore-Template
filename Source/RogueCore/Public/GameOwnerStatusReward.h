#pragma once
#include "CoreMinimal.h"
#include "EGameOwnerStatus.h"
#include "Reward.h"
#include "GameOwnerStatusReward.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameOwnerStatusReward : public UReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOwnerStatus RewardedGameOwnerStatus;
    
public:
    UGameOwnerStatusReward();

};

