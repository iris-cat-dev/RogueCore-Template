#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SpacerigConsole.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ASpacerigConsole : public AActor {
    GENERATED_BODY()
public:
    ASpacerigConsole(const FObjectInitializer& ObjectInitializer);

};

