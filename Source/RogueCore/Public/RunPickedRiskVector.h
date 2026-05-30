#pragma once
#include "CoreMinimal.h"
#include "RunPickedRiskVector.generated.h"

class URiskVector;

USTRUCT(BlueprintType)
struct FRunPickedRiskVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageIndexForPick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URiskVector* PositiveRiskVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URiskVector* NegativeRiskVector;
    
    ROGUECORE_API FRunPickedRiskVector();
};

