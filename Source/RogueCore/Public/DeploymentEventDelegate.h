#pragma once
#include "CoreMinimal.h"
#include "DeploymentInfo.h"
#include "DeploymentEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeploymentEvent, const FDeploymentInfo, DeploymentInfo);

