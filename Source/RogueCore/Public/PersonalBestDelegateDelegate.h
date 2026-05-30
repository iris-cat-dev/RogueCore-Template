#pragma once
#include "CoreMinimal.h"
#include "PersonalBestDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPersonalBestDelegate, int32, Score);

