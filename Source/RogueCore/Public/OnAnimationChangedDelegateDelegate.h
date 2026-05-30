#pragma once
#include "CoreMinimal.h"
#include "EFitnessMontageSectionNames.h"
#include "OnAnimationChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnimationChangedDelegate, EFitnessMontageSectionNames, Name);

