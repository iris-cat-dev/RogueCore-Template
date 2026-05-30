#pragma once
#include "CoreMinimal.h"
#include "EOverrideCrit.generated.h"

UENUM(BlueprintType)
enum class EOverrideCrit : uint8 {
    No,
    ForceCrit,
    ForceNormal,
};

