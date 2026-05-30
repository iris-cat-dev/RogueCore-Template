#pragma once
#include "CoreMinimal.h"
#include "ESnapToDirection.generated.h"

UENUM()
enum class ESnapToDirection : int32 {
    Top,
    Bottom,
    Left,
    Right,
};

