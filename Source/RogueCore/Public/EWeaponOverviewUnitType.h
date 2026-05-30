#pragma once
#include "CoreMinimal.h"
#include "EWeaponOverviewUnitType.generated.h"

UENUM(BlueprintType)
enum class EWeaponOverviewUnitType : uint8 {
    Numerical,
    Percentage,
    Second,
};

