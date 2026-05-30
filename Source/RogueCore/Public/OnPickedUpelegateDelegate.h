#pragma once
#include "CoreMinimal.h"
#include "OnPickedUpelegateDelegate.generated.h"

class ADrinkableActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickedUpelegate, ADrinkableActor*, Actor);

