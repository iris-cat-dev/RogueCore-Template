#pragma once
#include "CoreMinimal.h"
#include "OnForceSetRepsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForceSetRepsDelegate, int32, Reps);

