#pragma once
#include "CoreMinimal.h"
#include "EDamageNumberHitType.generated.h"

UENUM(BlueprintType)
enum class EDamageNumberHitType : uint8 {
    None,
    Weak,
    Normal,
    Strong,
    BreakableArmor,
    UnbreakableArmor,
};

