#pragma once
#include "CoreMinimal.h"
#include "EAbilityDeactivationType.generated.h"

UENUM(BlueprintType)
enum class EAbilityDeactivationType : uint8 {
    OnDuration,
    OnRelease,
    OnPress,
    OnAnimationFinished,
    Custom,
};

