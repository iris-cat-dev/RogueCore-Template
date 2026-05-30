#pragma once
#include "CoreMinimal.h"
#include "TXStageEndElevatorArrived.generated.h"

USTRUCT(BlueprintType)
struct FTXStageEndElevatorArrived {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float time_progression;
    
    ROGUECORE_API FTXStageEndElevatorArrived();
};

