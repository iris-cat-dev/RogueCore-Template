#pragma once
#include "CoreMinimal.h"
#include "EPhysicalMaterialType.generated.h"

UENUM(BlueprintType)
enum class EPhysicalMaterialType : uint8 {
    Terrain,
    Indestructable,
    Destructable,
    Creature,
    Any,
};

