#pragma once
#include "CoreMinimal.h"
#include "TXStageEndElevatorCalled.generated.h"

USTRUCT(BlueprintType)
struct FTXStageEndElevatorCalled {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float time_progression;
    
    ROGUECORE_API FTXStageEndElevatorCalled();
};

