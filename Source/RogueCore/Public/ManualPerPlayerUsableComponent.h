#pragma once
#include "CoreMinimal.h"
#include "OncePerPlayerInstantUsableComponent.h"
#include "ManualPerPlayerUsableComponent.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UManualPerPlayerUsableComponent : public UOncePerPlayerInstantUsableComponent {
    GENERATED_BODY()
public:
    UManualPerPlayerUsableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveExcludedUser(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable)
    void AddExcludedUser(APlayerCharacter* User);
    
};

