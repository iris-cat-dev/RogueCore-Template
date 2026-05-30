#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "SuspendedStateComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USuspendedStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    USuspendedStateComponent(const FObjectInitializer& ObjectInitializer);

};

