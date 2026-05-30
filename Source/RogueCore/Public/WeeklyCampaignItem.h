#pragma once
#include "CoreMinimal.h"
#include "WeeklyCampaignItem.generated.h"

USTRUCT(BlueprintType)
struct FWeeklyCampaignItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastCompletedWeek;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastStartedWeek;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardedProgress;
    
    ROGUECORE_API FWeeklyCampaignItem();
};

