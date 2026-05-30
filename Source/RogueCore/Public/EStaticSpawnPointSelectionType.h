#pragma once
#include "CoreMinimal.h"
#include "EStaticSpawnPointSelectionType.generated.h"

UENUM(BlueprintType)
enum class EStaticSpawnPointSelectionType : uint8 {
    Any,
    Small,
    Large,
    Tiny,
};

