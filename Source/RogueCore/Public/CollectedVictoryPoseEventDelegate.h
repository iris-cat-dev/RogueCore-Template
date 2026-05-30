#pragma once
#include "CoreMinimal.h"
#include "CollectedVictoryPoseEventDelegate.generated.h"

class UPlayerCharacterID;
class UVictoryPose;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCollectedVictoryPoseEvent, UVictoryPose*, Pose, UPlayerCharacterID*, characterID);

