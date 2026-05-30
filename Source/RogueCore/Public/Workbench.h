#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Workbench.generated.h"

UCLASS(Blueprintable)
class AWorkbench : public AActor {
    GENERATED_BODY()
public:
    AWorkbench(const FObjectInitializer& ObjectInitializer);

};

