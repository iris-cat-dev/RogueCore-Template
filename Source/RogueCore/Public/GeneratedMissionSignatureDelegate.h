#pragma once
#include "CoreMinimal.h"
#include "GeneratedMissionSignatureDelegate.generated.h"

class UStage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeneratedMissionSignature, UStage*, OutGeneratedMission);

