#pragma once
#include "CoreMinimal.h"
#include "DeploymentSlotRequirement.generated.h"

USTRUCT(BlueprintType)
struct FDeploymentSlotRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeritCost;
    
    ROGUECORE_API FDeploymentSlotRequirement();
};

