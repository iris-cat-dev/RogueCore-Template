#pragma once
#include "CoreMinimal.h"
#include "RewardTreeSave.generated.h"

USTRUCT(BlueprintType)
struct FRewardTreeSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> NodesBought;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> LocksUnlocked;
    
    ROGUECORE_API FRewardTreeSave();
};

