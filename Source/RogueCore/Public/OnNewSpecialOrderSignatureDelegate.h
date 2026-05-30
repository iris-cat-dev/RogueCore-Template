#pragma once
#include "CoreMinimal.h"
#include "OnNewSpecialOrderSignatureDelegate.generated.h"

class UDrinkableDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewSpecialOrderSignature, UDrinkableDataAsset*, Order);

