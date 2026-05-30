#pragma once
#include "CoreMinimal.h"
#include "EWeaponOverviewModifierType.generated.h"

UENUM(BlueprintType)
enum class EWeaponOverviewModifierType : uint8 {
    Additive,
    Multiplicative,
    Unique,
};

