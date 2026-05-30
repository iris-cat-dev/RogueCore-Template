#pragma once
#include "CoreMinimal.h"
#include "RunRiskVector.generated.h"

class URiskVector;

USTRUCT(BlueprintType)
struct FRunRiskVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URiskVector* RiskVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageIndexToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActiveInSingleStage;
    
    ROGUECORE_API FRunRiskVector();
};

