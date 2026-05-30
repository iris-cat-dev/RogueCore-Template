#pragma once
#include "CoreMinimal.h"
#include "PlayerMovedPassedDelegateDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerMovedPassedDelegate, APlayerCharacter*, Character, bool, inFront);

