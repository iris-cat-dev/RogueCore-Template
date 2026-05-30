#pragma once
#include "CoreMinimal.h"
#include "WaveDifficultyRanges.h"
#include "WaveDifficultyController.generated.h"

USTRUCT(BlueprintType)
struct FWaveDifficultyController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveDifficultyRanges SpawnRateRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveDifficultyRanges DifficultyRanges;
    
    ROGUECORE_API FWaveDifficultyController();
};

