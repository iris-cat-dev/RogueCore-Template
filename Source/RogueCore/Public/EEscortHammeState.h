#pragma once
#include "CoreMinimal.h"
#include "EEscortHammeState.generated.h"

UENUM(BlueprintType)
enum class EEscortHammeState : uint8 {
    Intital,
    WindUp,
    Ready,
    PrepLaunch,
    Launch,
    Impacted,
    Complete,
    NUM,
};

