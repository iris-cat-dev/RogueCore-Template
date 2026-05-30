#pragma once
#include "CoreMinimal.h"
#include "EnhancementSlotUnlockRequirement.generated.h"

USTRUCT(BlueprintType)
struct FEnhancementSlotUnlockRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeritCost;
    
    ROGUECORE_API FEnhancementSlotUnlockRequirement();
};

