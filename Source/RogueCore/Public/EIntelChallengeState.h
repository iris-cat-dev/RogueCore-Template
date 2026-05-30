#pragma once
#include "CoreMinimal.h"
#include "EIntelChallengeState.generated.h"

UENUM(BlueprintType)
enum class EIntelChallengeState : uint8 {
    Locked,
    Active,
    Claimable,
    Complete,
};

