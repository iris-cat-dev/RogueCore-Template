#pragma once
#include "CoreMinimal.h"
#include "EDoubleLanePromptLocation.generated.h"

UENUM(BlueprintType)
enum class EDoubleLanePromptLocation : uint8 {
    SweetSpot,
    AreaAroundSweetSpot,
    Corners,
};

