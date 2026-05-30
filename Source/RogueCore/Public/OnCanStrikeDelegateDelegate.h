#pragma once
#include "CoreMinimal.h"
#include "OnCanStrikeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCanStrikeDelegate, bool, Available);

