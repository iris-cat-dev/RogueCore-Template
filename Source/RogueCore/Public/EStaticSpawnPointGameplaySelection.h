#pragma once
#include "CoreMinimal.h"
#include "EStaticSpawnPointGameplaySelection.generated.h"

UENUM(BlueprintType)
enum class EStaticSpawnPointGameplaySelection : uint8 {
    Any,
    BioBooster,
    Workbench,
    DroneActivatedCrate,
    FillerRewards,
    Armor,
    Ammo,
    Explosives,
};

