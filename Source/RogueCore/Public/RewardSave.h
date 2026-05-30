#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "RewardSave.generated.h"

USTRUCT(BlueprintType)
struct FRewardSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> ClaimedIDs;
    
public:
    ROGUECORE_API FRewardSave();
};

