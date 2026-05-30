#pragma once
#include "CoreMinimal.h"
#include "EPointVisibility.generated.h"

UENUM(BlueprintType)
enum class EPointVisibility : uint8 {
    Visible,
    BehindPlanet,
    OutOfScreen,
};

