#pragma once
#include "CoreMinimal.h"
#include "EOnlineSessionStatus.generated.h"

UENUM(BlueprintType)
enum class EOnlineSessionStatus : uint8 {
    NoSession,
    CreatingSession,
    HostingSession,
    JoiningSession,
    JoinedSession,
    LeavingSession,
    Disconnected,
    FailureState,
};

