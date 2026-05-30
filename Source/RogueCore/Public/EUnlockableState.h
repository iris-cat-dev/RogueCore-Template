#pragma once
#include "CoreMinimal.h"
#include "EUnlockableState.generated.h"

UENUM(BlueprintType)
enum EUnlockableState {
    Unlockable,
    Unlocked,
    Locked,
};

