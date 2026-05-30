#pragma once
#include "CoreMinimal.h"
#include "ELoginResult.generated.h"

UENUM(BlueprintType)
enum class ELoginResult : uint8 {
    InvalidDefaultService,
    InvalidPlatformService,
};

