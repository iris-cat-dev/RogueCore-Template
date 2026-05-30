#pragma once
#include "CoreMinimal.h"
#include "EAudioCharacterOverrideType.generated.h"

UENUM(BlueprintType)
enum class EAudioCharacterOverrideType : uint8 {
    IsLocalPlayer,
    IsNotLocalPlayer,
};

