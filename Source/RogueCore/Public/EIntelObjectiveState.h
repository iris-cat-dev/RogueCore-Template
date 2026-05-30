#pragma once
#include "CoreMinimal.h"
#include "EIntelObjectiveState.generated.h"

UENUM(BlueprintType)
enum class EIntelObjectiveState : uint8 {
    Locked,
    Claimable,
    Active,
    Complete,
};

