#pragma once
#include "CoreMinimal.h"
#include "EItemAimSetup.generated.h"

UENUM(BlueprintType)
enum class EItemAimSetup : uint8 {
    FromParent,
    OneHandedLeft,
    OneHandedRight,
    OneHandedDual,
    TwoHanded,
};

