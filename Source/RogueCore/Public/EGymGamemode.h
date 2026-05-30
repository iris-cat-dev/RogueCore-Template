#pragma once
#include "CoreMinimal.h"
#include "EGymGamemode.generated.h"

UENUM(BlueprintType)
enum class EGymGamemode : uint8 {
    Meter,
    Run,
    Button,
    ButtonSequence,
    None,
};

