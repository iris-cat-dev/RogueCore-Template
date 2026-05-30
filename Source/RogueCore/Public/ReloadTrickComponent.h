#pragma once
#include "CoreMinimal.h"
#include "BXELogicUnlockComponent.h"
#include "ReloadTrickComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UReloadTrickComponent : public UBXELogicUnlockComponent {
    GENERATED_BODY()
public:
    UReloadTrickComponent(const FObjectInitializer& ObjectInitializer);

};

