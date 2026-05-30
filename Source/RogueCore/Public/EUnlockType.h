#pragma once
#include "CoreMinimal.h"
#include "EUnlockType.generated.h"

UENUM(BlueprintType)
enum class EUnlockType : uint8 {
    None,
    Upgrade,
    BioBooster,
    Artifact,
    AbilityUpgrade,
    Weapon,
    Equipment,
    Throwables,
    Grenades,
    Attribute,
};

