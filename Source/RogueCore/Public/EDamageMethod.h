#pragma once
#include "CoreMinimal.h"
#include "EDamageMethod.generated.h"

UENUM(BlueprintType)
enum class EDamageMethod : uint8 {
    Direct,
    Radial,
};

