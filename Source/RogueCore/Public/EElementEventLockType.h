#pragma once
#include "CoreMinimal.h"
#include "EElementEventLockType.generated.h"

UENUM(BlueprintType)
enum class EElementEventLockType : uint8 {
    None,
    UseEventDurationAsElementLock,
    LockUntilEventRemoved,
};

