#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "PlagueWorm.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API APlagueWorm : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    APlagueWorm(const FObjectInitializer& ObjectInitializer);

};

