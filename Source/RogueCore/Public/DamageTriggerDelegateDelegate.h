#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "DamageListenerData.h"
#include "DamageParams.h"
#include "DamageTriggerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDamageTriggerDelegate, const TArray<FDamageListenerData>&, listenerData, const FDamageParams&, Params, const FDamageInfo&, Damage, int32, eventInfo);

