#pragma once
#include "CoreMinimal.h"
#include "EWeaponFireUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EWeaponFireUpgradeType : uint8 {
    MaxVerticalSpread,
    MaxHorizontalSpread,
    WeaponAccuracySpreadMultiplier,
    SpreadPerShot,
    MinSpreadWhileMoving,
    SpreadRecoveryMultiplier,
    MinSpreadWhileSprinting,
    MaxSpread,
};

