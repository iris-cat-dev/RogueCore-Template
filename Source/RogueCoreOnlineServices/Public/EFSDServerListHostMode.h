#pragma once
#include "CoreMinimal.h"
#include "EFSDServerListHostMode.generated.h"

UENUM(BlueprintType)
enum class EFSDServerListHostMode : uint8 {
    None,
    Public,
    Private,
};

