#pragma once
#include "CoreMinimal.h"
#include "FlareThrownDelegateDelegate.generated.h"

class AFlare;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlareThrownDelegate, AFlare*, NewFlare);

