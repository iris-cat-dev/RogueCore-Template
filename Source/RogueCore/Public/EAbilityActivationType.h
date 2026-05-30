#pragma once
#include "CoreMinimal.h"
#include "EAbilityActivationType.generated.h"

UENUM(BlueprintType)
enum class EAbilityActivationType : uint8 {
    OnRelease,
    OnPress,
};

