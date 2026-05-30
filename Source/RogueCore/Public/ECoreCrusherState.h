#pragma once
#include "CoreMinimal.h"
#include "ECoreCrusherState.generated.h"

UENUM(BlueprintType)
enum class ECoreCrusherState : uint8 {
    Disassembled,
    Idle,
    Running,
    Broken,
    Done,
};

