#pragma once
#include "CoreMinimal.h"
#include "ERunListOverrideType.generated.h"

UENUM(BlueprintType)
enum class ERunListOverrideType : uint8 {
    None,
    Force,
    Add,
};

