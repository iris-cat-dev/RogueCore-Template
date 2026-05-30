#pragma once
#include "CoreMinimal.h"
#include "ParsedCharacterDamageData.h"
#include "OnDamageDataReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageDataReceived, const FParsedCharacterDamageData&, DamageData);

