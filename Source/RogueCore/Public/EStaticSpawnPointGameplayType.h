#pragma once
#include "CoreMinimal.h"
#include "EStaticSpawnPointGameplayType.generated.h"

UENUM(BlueprintType)
enum class EStaticSpawnPointGameplayType : uint8 {
    BioBooster,
    Workbench,
    DroneActivatedCrate,
    FillerRewards,
    Armor,
    Ammo,
    Explosives,
};

