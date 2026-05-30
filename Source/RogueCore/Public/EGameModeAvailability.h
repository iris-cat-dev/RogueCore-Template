#pragma once
#include "CoreMinimal.h"
#include "EGameModeAvailability.generated.h"

UENUM(BlueprintType)
enum class EGameModeAvailability : uint8 {
    All,
    SoloOnly,
    CoopOnly,
};

