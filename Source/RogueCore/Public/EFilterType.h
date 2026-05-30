#pragma once
#include "CoreMinimal.h"
#include "EFilterType.generated.h"

UENUM()
enum class EFilterType : int32 {
    Exclude,
    Include,
};

