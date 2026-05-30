#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "StoredState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UStoredState : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    UStoredState(const FObjectInitializer& ObjectInitializer);

};

