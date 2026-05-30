#pragma once
#include "CoreMinimal.h"
#include "EFadeScreenType.generated.h"

UENUM(BlueprintType)
enum class EFadeScreenType : uint8 {
    FadeToBlack,
    FadeFromBlack,
};

