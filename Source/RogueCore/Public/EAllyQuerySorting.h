#pragma once
#include "CoreMinimal.h"
#include "EAllyQuerySorting.generated.h"

UENUM(BlueprintType)
enum EAllyQuerySorting {
    NoSorting,
    DistanceSorted,
    Random,
};

