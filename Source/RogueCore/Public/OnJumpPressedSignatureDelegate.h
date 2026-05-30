#pragma once
#include "CoreMinimal.h"
#include "OnJumpPressedSignatureDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpPressedSignature, APlayerCharacter*, InPlayer);

