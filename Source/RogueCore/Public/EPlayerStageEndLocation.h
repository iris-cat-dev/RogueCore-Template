#pragma once
#include "CoreMinimal.h"
#include "EPlayerStageEndLocation.generated.h"

UENUM(BlueprintType)
enum class EPlayerStageEndLocation : uint8 {
    Unknown,
    LeftWithSuccess,
    LeftWithFailure,
};

