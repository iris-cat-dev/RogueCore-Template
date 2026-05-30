#pragma once
#include "CoreMinimal.h"
#include "OnSoundQueDelegateDelegate.generated.h"

class USoundControlBus;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSoundQueDelegate, USoundControlBus*, Bus, float, Value, float, FadeTime);

