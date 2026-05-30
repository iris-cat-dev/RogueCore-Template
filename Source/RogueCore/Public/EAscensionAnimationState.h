#pragma once
#include "CoreMinimal.h"
#include "EAscensionAnimationState.generated.h"

UENUM(BlueprintType)
enum class EAscensionAnimationState : uint8 {
    None,
    Start,
    Loop,
    End,
};

