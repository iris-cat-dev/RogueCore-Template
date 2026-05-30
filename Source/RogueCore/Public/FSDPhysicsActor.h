#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FSDPhysicsActor.generated.h"

UCLASS(Blueprintable)
class AFSDPhysicsActor : public AActor {
    GENERATED_BODY()
public:
    AFSDPhysicsActor(const FObjectInitializer& ObjectInitializer);

};

