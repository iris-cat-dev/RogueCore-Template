#pragma once
#include "CoreMinimal.h"
#include "EBXECompanionDroneState.generated.h"

UENUM(BlueprintType)
enum class EBXECompanionDroneState : uint8 {
    Following,
    LandingToUpgrade,
    LandingToDeposit,
    Dispensing,
    ActivatingElevator,
    Waiting,
    Deposit,
    ActivatingMachinery,
    ProcessingArtifact,
    DispensingArtifact,
    ProcessingPotentExpenite,
    DispensingPotentExpenite,
    Saluting,
    TakeoffToFollow,
    TakeoffToDeposit,
};

