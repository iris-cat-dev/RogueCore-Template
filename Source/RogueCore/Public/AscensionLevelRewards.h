#pragma once
#include "CoreMinimal.h"
#include "ClaimableRewardEntry.h"
#include "AscensionLevelRewards.generated.h"

USTRUCT(BlueprintType)
struct FAscensionLevelRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AscensionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClaimableRewardEntry> ClassAscensionRewards;
    
    ROGUECORE_API FAscensionLevelRewards();
};

