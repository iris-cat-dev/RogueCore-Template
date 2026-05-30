#pragma once
#include "CoreMinimal.h"
#include "DamageData.h"
#include "PlayerHitSigDelegate.generated.h"

class UPlayerHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FPlayerHitSig, UPlayerHealthComponent*, playerHealth, float, RawDamage, float, actualDamage, const FDamageData&, DamageData, bool, anyHealthLost);

