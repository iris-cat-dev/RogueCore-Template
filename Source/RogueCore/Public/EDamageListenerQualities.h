#pragma once
#include "CoreMinimal.h"
#include "EDamageListenerQualities.generated.h"

UENUM(BlueprintType)
enum class EDamageListenerQualities : uint8 {
    None,
    OnDamagedTarget,
    OnDamagedLocaiton,
    OnReceivedDamage,
    OnCritTarget,
    OnHitTarget,
    OnRadialOverlap,
    OnKilledTarget,
};

