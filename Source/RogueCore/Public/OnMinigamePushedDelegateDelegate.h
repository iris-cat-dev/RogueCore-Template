#pragma once
#include "CoreMinimal.h"
#include "OnMinigamePushedDelegateDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMinigamePushedDelegate, APlayerCharacter*, Owner, int32, Index);

