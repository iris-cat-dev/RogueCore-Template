#pragma once
#include "CoreMinimal.h"
#include "EExerciseDifficultyChoice.generated.h"

UENUM(BlueprintType)
enum class EExerciseDifficultyChoice : uint8 {
    AlwaysPickSelected,
    AllowEasierDifficulties,
    AllowHarderDifficulties,
    AllowAll,
};

