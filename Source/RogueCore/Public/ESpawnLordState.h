#pragma once
#include "CoreMinimal.h"
#include "ESpawnLordState.generated.h"

UENUM(BlueprintType)
enum class ESpawnLordState : uint8 {
    Idle,
    Attacking,
    SummoningAds,
    Healing,
    Final,
};

