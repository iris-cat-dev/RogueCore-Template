#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectPopSetting.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectPopSetting : uint8 {
    Temporary,
    Permanent,
};

