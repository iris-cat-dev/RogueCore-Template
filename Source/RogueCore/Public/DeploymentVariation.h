#pragma once
#include "CoreMinimal.h"
#include "DeploymentVariation.generated.h"

USTRUCT(BlueprintType)
struct FDeploymentVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredNumberOfWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeritReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ROGUECORE_API FDeploymentVariation();
};

