#pragma once
#include "CoreMinimal.h"
#include "EWhileRewindActiveUpgrade.generated.h"

UENUM()
enum class EWhileRewindActiveUpgrade : int32 {
    DamageBonuses,
    SelfStatusEffects,
    AlliesStatusEffects,
};

