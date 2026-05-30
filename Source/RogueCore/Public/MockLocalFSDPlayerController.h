#pragma once
#include "CoreMinimal.h"
#include "FSDPlayerController.h"
#include "MockLocalFSDPlayerController.generated.h"

UCLASS(Blueprintable)
class AMockLocalFSDPlayerController : public AFSDPlayerController {
    GENERATED_BODY()
public:
    AMockLocalFSDPlayerController(const FObjectInitializer& ObjectInitializer);

};

