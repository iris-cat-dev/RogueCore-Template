#pragma once
#include "CoreMinimal.h"
#include "EDeathType.h"
#include "DeathTypedDelegate.generated.h"

class UDeathFXComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeathTyped, UDeathFXComponent*, DeathFXComponent, EDeathType, DeathType);

