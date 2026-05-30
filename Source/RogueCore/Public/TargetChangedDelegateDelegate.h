#pragma once
#include "CoreMinimal.h"
#include "TargetChangedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTargetChangedDelegate, AActor*, NewTarget);

