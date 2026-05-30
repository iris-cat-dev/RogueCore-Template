#pragma once
#include "CoreMinimal.h"
#include "MinigameWidgetBase.h"
#include "MinigamePlayableProgressbarWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMinigamePlayableProgressbarWidget : public UMinigameWidgetBase {
    GENERATED_BODY()
public:
    UMinigamePlayableProgressbarWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimer(float TimeLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHitAreaVisibility(bool visible, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHitAreaLocationAndSize(float LocationPercentage, float Size, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCrosshairAreaLocation(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHitAnimation(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IFrameChange(bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCrosshairHitSize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Clicked(bool success);
    
};

