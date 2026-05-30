#pragma once
#include "CoreMinimal.h"
#include "EDamageConditionDistanceMode.generated.h"

UENUM(BlueprintType)
enum class EDamageConditionDistanceMode : uint8 {
    FromInstigator,
    FromCauser,
    FromDamageLocation,
};

