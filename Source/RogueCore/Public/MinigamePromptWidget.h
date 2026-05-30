#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinigamePromptWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMinigamePromptWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMinigamePromptWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(float Progress);
    
};

