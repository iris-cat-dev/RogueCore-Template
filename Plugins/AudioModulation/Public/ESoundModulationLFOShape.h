#pragma once
#include "CoreMinimal.h"
#include "ESoundModulationLFOShape.generated.h"

UENUM(BlueprintType)
enum class ESoundModulationLFOShape : uint8 {
    Sine,
    UpSaw,
    DownSaw,
    Square,
    Triangle,
    Exponential,
    RandomSampleHold,
    COUNT,
};

