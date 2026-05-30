#pragma once
#include "CoreMinimal.h"
#include "OnRepNewHighscoreDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRepNewHighscoreDelegate, int32, newAmount, int32, ID, FText, Username);

