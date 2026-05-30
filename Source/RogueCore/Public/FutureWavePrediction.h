#pragma once
#include "CoreMinimal.h"
#include "FutureWavePrediction.generated.h"

USTRUCT(BlueprintType)
struct FFutureWavePrediction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Difficulty;
    
    ROGUECORE_API FFutureWavePrediction();
};

