#pragma once
#include "CoreMinimal.h"
#include "EPlatformBranch.generated.h"

UENUM(BlueprintType)
enum class EPlatformBranch : uint8 {
    Main,
    Experimental,
    Internal_Testing,
    Other,
};

