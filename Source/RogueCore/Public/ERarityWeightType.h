#pragma once
#include "CoreMinimal.h"
#include "ERarityWeightType.generated.h"

UENUM(BlueprintType)
enum class ERarityWeightType : uint8 {
    Default,
    NegotiatedUnlocks,
    Artifacts,
    Weapons,
    Equipment,
    Grenades,
    Jumble,
    WeaponsWorkbench,
};

