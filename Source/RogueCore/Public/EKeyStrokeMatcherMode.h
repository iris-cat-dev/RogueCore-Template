#pragma once
#include "CoreMinimal.h"
#include "EKeyStrokeMatcherMode.generated.h"

UENUM(BlueprintType)
enum class EKeyStrokeMatcherMode : uint8 {
    Sequence,
    Simultaneous,
};

