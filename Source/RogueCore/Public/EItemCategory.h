#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.generated.h"

UENUM(BlueprintType)
enum class EItemCategory : uint8 {
    None,
    PrimaryWeapon,
    SecondaryWeapon,
    Tool = 4,
    Misc = 8,
    Grenade = 16,
    Flare = 32,
    MiningTool = 64,
    Armor = 128,
};

