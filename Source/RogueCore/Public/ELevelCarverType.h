#pragma once
#include "CoreMinimal.h"
#include "ELevelCarverType.generated.h"

UENUM(BlueprintType)
enum class ELevelCarverType : uint8 {
    None,
    MeshCarver,
    SplineCarver,
};

