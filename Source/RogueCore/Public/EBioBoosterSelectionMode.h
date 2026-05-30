#pragma once
#include "CoreMinimal.h"
#include "EBioBoosterSelectionMode.generated.h"

UENUM(BlueprintType)
enum class EBioBoosterSelectionMode : uint8 {
    AllFromAllDecks,
    AllFromOneDeck,
};

