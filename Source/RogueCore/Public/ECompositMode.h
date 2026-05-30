#pragma once
#include "CoreMinimal.h"
#include "ECompositMode.generated.h"

UENUM(BlueprintType)
enum class ECompositMode : uint8 {
    AnySucceeds,
    AllSucceeds,
};

