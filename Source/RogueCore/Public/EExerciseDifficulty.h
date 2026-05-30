#pragma once
#include "CoreMinimal.h"
#include "EExerciseDifficulty.generated.h"

UENUM(BlueprintType)
enum class EExerciseDifficulty : uint8 {
    PickDifficulty,
    Easy,
    Normal,
    Hard,
    Impossible,
};

