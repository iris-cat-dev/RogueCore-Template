#pragma once
#include "CoreMinimal.h"
#include "ElevatorDelegateDelegate.generated.h"

class ATeamElevator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElevatorDelegate, ATeamElevator*, Elevator);

