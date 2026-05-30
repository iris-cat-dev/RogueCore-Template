#pragma once
#include "CoreMinimal.h"
#include "FlyingEnemyDeepPathfinderCharacter.h"
#include "Plover.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API APlover : public AFlyingEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    APlover(const FObjectInitializer& ObjectInitializer);

};

