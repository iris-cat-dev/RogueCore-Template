#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CheatConsole.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API ACheatConsole : public AActor {
    GENERATED_BODY()
public:
    ACheatConsole(const FObjectInitializer& ObjectInitializer);

};

