#pragma once
#include "CoreMinimal.h"
#include "EResourceFilterType.generated.h"

UENUM(BlueprintType)
enum class EResourceFilterType : uint8 {
    BlackList,
    WhiteList,
};

