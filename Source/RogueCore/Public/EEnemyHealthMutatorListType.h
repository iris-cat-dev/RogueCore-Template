#pragma once
#include "CoreMinimal.h"
#include "EEnemyHealthMutatorListType.generated.h"

UENUM(BlueprintType)
enum class EEnemyHealthMutatorListType : uint8 {
    Inclusive,
    Exclusive,
};

