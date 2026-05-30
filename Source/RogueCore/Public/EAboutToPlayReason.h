#pragma once
#include "CoreMinimal.h"
#include "EAboutToPlayReason.generated.h"

UENUM(BlueprintType)
enum class EAboutToPlayReason : uint8 {
    Normal,
    LateJoin,
    ReJoin,
};

