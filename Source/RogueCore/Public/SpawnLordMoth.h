#pragma once
#include "CoreMinimal.h"
#include "CoreSpawnEnemyBase.h"
#include "SpawnLordMoth.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ASpawnLordMoth : public ACoreSpawnEnemyBase {
    GENERATED_BODY()
public:
    ASpawnLordMoth(const FObjectInitializer& ObjectInitializer);

};

