#pragma once
#include "CoreMinimal.h"
#include "EFSDServerListFilterModdedType.generated.h"

UENUM(BlueprintType)
enum class EFSDServerListFilterModdedType : uint8 {
    Any,
    OnlyModdedGames,
    NoModdedGames,
};

