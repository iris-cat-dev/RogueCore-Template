#pragma once
#include "CoreMinimal.h"
#include "EFSDLoginState.h"
#include "FSDOnLoginStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDOnLoginStatusChanged, EFSDLoginState, LoginStatus, const FString&, LoginResult);

