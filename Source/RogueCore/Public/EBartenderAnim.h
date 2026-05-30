#pragma once
#include "CoreMinimal.h"
#include "EBartenderAnim.generated.h"

UENUM(BlueprintType)
enum class EBartenderAnim : uint8 {
    Idle,
    Pour,
    Salute,
    None,
};

