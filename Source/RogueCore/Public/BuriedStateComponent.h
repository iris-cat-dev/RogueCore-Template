#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "BuriedStateComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBuriedStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    UBuriedStateComponent(const FObjectInitializer& ObjectInitializer);

};

