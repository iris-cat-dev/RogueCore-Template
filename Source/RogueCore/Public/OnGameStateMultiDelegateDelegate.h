#pragma once
#include "CoreMinimal.h"
#include "OnGameStateMultiDelegateDelegate.generated.h"

class AFSDGameState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameStateMultiDelegate, AFSDGameState*, GameState);

