#pragma once
#include "CoreMinimal.h"
#include "PlayerCountChangedSigDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCountChangedSig, int32, PlayerCount);

