#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinigameLifeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMinigameLifeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMinigameLifeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMaxLives(int32 Lives);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLives(int32 Lives);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Freeze(bool NewFreeze);
    
};

