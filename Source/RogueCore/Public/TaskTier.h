#pragma once
#include "CoreMinimal.h"
#include "TaskTier.generated.h"

class UReward;

USTRUCT(BlueprintType)
struct ROGUECORE_API FTaskTier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionCount;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReward* Reward;
    
    FTaskTier();
};

