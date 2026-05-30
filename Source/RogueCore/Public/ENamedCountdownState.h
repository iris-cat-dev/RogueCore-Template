#pragma once
#include "CoreMinimal.h"
#include "ENamedCountdownState.generated.h"

UENUM(BlueprintType)
enum class ENamedCountdownState : uint8 {
    NotStarted,
    Started,
    Finished,
};

