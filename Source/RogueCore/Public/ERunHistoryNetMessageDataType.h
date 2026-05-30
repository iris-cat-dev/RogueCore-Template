#pragma once
#include "CoreMinimal.h"
#include "ERunHistoryNetMessageDataType.generated.h"

UENUM(BlueprintType)
enum class ERunHistoryNetMessageDataType : uint8 {
    DamageData,
    RunHistory,
};

