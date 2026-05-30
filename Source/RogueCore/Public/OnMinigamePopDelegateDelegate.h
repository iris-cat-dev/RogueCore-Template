#pragma once
#include "CoreMinimal.h"
#include "OnMinigamePopDelegateDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMinigamePopDelegate, APlayerCharacter*, Owner, int32, Index);

