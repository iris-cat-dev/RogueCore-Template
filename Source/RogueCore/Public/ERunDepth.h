#pragma once
#include "CoreMinimal.h"
#include "ERunDepth.generated.h"

UENUM(BlueprintType)
enum class ERunDepth : uint8 {
    None,
    Depth1,
    Depth2,
    Depth3,
    Depth4,
};

