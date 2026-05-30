#pragma once
#include "CoreMinimal.h"
#include "EFSDServerListFilterProgressType.generated.h"

UENUM(BlueprintType)
enum class EFSDServerListFilterProgressType : uint8 {
    Any,
    IsInProgress,
    NotInProgress,
};

