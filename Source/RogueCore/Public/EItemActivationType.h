#pragma once
#include "CoreMinimal.h"
#include "EItemActivationType.generated.h"

UENUM(BlueprintType)
enum class EItemActivationType : uint8 {
    Immediate,
    Manual,
};

