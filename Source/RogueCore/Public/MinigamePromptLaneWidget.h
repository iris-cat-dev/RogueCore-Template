#pragma once
#include "CoreMinimal.h"
#include "MinigameWidgetBase.h"
#include "MinigamePromptLaneWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMinigamePromptLaneWidget : public UMinigameWidgetBase {
    GENERATED_BODY()
public:
    UMinigamePromptLaneWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Released();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Pressed();
    
};

