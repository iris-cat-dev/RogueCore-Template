#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "AscensionRewardsSave.generated.h"

USTRUCT(BlueprintType)
struct FAscensionRewardsSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> ClaimedRewards;
    
public:
    ROGUECORE_API FAscensionRewardsSave();
};

