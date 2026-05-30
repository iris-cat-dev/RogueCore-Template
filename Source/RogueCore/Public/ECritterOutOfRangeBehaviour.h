#pragma once
#include "CoreMinimal.h"
#include "ECritterOutOfRangeBehaviour.generated.h"

UENUM(BlueprintType)
enum class ECritterOutOfRangeBehaviour : uint8 {
    Destroy,
    Disable,
    Nothing,
};

