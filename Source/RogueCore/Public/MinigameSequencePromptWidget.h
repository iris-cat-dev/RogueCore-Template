#pragma once
#include "CoreMinimal.h"
#include "MinigameWidgetBase.h"
#include "MinigameSequencePromptWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMinigameSequencePromptWidget : public UMinigameWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBox;
    
    UMinigameSequencePromptWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimer(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(const FName InputName, int32 Axis, int32 Box, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStartAnimationPlaybackSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPromptProgress(int32 Index, float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjectiveSize(int32 Box, int32 InputCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIFrame(bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHighlighted(int32 Index, bool IFrame, bool AllCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFlipped(bool Flipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentBox(int32 Box);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetAllHighlighted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Clicked(bool Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearObjectievs();
    
};

