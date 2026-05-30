#pragma once
#include "CoreMinimal.h"
#include "ParsedCharacterBuildData.h"
#include "OnBuildDataReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildDataReceived, const FParsedCharacterBuildData&, Entry);

