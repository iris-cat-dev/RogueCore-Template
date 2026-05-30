#pragma once
#include "CoreMinimal.h"
#include "EDebrisItemPass.generated.h"

UENUM(BlueprintType)
enum class EDebrisItemPass : uint8 {
    PrePlacement,
    CriticalLarge,
    DebrisLarge,
    Dirt,
    Main,
    PostDebris,
    Decoration,
};

