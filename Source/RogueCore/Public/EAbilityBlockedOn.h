#pragma once
#include "CoreMinimal.h"
#include "EAbilityBlockedOn.generated.h"

UENUM(BlueprintType)
enum class EAbilityBlockedOn : uint8 {
    Unique,
    OtherOfEqualAbility,
    OtherTeamAbility,
};

