#pragma once
#include "CoreMinimal.h"
#include "EObjectiveFailReason.generated.h"

UENUM(BlueprintType)
enum class EObjectiveFailReason : uint8 {
    None,
    SpawnFail,
};

