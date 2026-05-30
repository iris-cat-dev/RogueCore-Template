#pragma once
#include "CoreMinimal.h"
#include "EServerListLobbyStatusType.generated.h"

UENUM(BlueprintType)
enum class EServerListLobbyStatusType : uint8 {
    JoinableRejoin,
    JoinableInLobby,
    JoinableInProgress,
    CannotJoinOwnLobby,
    CannotJoinIntelRequired,
    CannotJoinInProgress,
    CannotJoinFull,
    CannotJoinUnknown,
};

