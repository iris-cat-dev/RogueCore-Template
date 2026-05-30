#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinigameTimerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMinigameTimerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMinigameTimerWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimer(float Time);
    
};

