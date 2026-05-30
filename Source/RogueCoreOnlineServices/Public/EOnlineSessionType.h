#pragma once
#include "CoreMinimal.h"
#include "EOnlineSessionType.generated.h"

UENUM(BlueprintType)
enum class EOnlineSessionType : uint8 {
    Solo,
    Private,
    PasswordProtected,
    Open,
};

