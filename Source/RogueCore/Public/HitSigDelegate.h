#pragma once
#include "CoreMinimal.h"
#include "DamageData.h"
#include "HitSigDelegate.generated.h"

class UHealthComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHitSig, float, Damage, const FDamageData&, DamageData, bool, anyHealthLost, UHealthComponentBase*, HealthComponent);

