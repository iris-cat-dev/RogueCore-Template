#pragma once
#include "CoreMinimal.h"
#include "ECharacterIconType.generated.h"

UENUM(BlueprintType)
enum class ECharacterIconType : uint8 {
    HeroIcon,
    CharacterSelectorIcon,
    SmallHeroIcon,
    HeroFullSizeImage,
    AbilityIcon,
};

