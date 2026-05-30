#pragma once
#include "CoreMinimal.h"
#include "OnGameStateDelegateDelegate.generated.h"

class AFSDGameState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGameStateDelegate, AFSDGameState*, GameState);

