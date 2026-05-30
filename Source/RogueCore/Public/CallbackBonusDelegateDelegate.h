#pragma once
#include "CoreMinimal.h"
#include "CallbackBonusDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCallbackBonusDelegate, AActor*, Target);

