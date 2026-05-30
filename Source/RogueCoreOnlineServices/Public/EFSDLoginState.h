#pragma once
#include "CoreMinimal.h"
#include "EFSDLoginState.generated.h"

UENUM(BlueprintType)
enum class EFSDLoginState : uint8 {
    LoggedOut,
    LoggingIn,
    LoggedIn,
    LoginFailed,
    TokenExpiring,
    Offline,
};

