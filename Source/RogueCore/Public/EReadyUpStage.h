#pragma once
#include "CoreMinimal.h"
#include "EReadyUpStage.generated.h"

UENUM(BlueprintType)
enum class EReadyUpStage : uint8 {
    NotActive,
    Active,
    Finished,
};

