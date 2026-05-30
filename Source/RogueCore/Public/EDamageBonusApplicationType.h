#pragma once
#include "CoreMinimal.h"
#include "EDamageBonusApplicationType.generated.h"

UENUM(BlueprintType)
enum class EDamageBonusApplicationType : uint8 {
    OnTarget,
    OnEquippedItems,
};

