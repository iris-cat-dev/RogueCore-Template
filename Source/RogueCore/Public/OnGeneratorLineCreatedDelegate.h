#pragma once
#include "CoreMinimal.h"
#include "OnGeneratorLineCreatedDelegate.generated.h"

class AGeneratorLine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGeneratorLineCreated, AGeneratorLine*, InGeneratorLine);

