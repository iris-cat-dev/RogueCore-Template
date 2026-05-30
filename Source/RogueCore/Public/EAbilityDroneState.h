#pragma once
#include "CoreMinimal.h"
#include "EAbilityDroneState.generated.h"

UENUM(BlueprintType)
enum class EAbilityDroneState : uint8 {
    Disabled,
    Searching,
    Attacking,
    Probing,
    Recalling,
    Reviving,
};

