#pragma once
#include "CoreMinimal.h"
#include "InstancedEffectTriggeredDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInstancedEffectTriggeredDelegate, AActor*, targetActor, bool, entered);

