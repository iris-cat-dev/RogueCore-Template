#pragma once
#include "CoreMinimal.h"
#include "EAscensionHallState.generated.h"

UENUM(BlueprintType)
enum class EAscensionHallState : uint8 {
    NoDwarfHasEntered,
    DwarfHasEntered,
    AscensionInProgress,
};

