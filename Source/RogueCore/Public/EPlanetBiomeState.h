#pragma once
#include "CoreMinimal.h"
#include "EPlanetBiomeState.generated.h"

UENUM(BlueprintType)
enum class EPlanetBiomeState : uint8 {
    Available,
    Locked,
    OutOfRange,
};

