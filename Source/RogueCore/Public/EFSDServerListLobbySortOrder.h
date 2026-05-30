#pragma once
#include "CoreMinimal.h"
#include "EFSDServerListLobbySortOrder.generated.h"

UENUM(BlueprintType)
enum class EFSDServerListLobbySortOrder : uint8 {
    Name,
    Depth,
    Complexity,
    Length,
    PlayerCount,
    Distance,
    Mutator,
    Status,
};

