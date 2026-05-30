#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectStackMode.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectStackMode : uint8 {
    HasAnyStacks,
    HasLessStacksThan,
    HasMoreStacksThan,
};

