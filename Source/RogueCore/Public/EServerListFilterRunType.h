#pragma once
#include "CoreMinimal.h"
#include "EServerListFilterRunType.generated.h"

UENUM(BlueprintType)
enum class EServerListFilterRunType : uint8 {
    Any,
    Default,
    TimeAttack,
    Tutorial,
};

