#pragma once
#include "CoreMinimal.h"
#include "EBXEOverclockType.generated.h"

UENUM(BlueprintType)
enum class EBXEOverclockType : uint8 {
    None,
    Safe,
    Any,
};

