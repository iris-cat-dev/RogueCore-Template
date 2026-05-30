#pragma once
#include "CoreMinimal.h"
#include "MinigameWidgetBase.h"
#include "MinigameLaneWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMinigameLaneWidget : public UMinigameWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LaneIndex;
    
    UMinigameLaneWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimer(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSweetSpot(float SweetSpot, float AroundSweetSpot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(int32 aIndex, float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerLocation(float Location);
    
    UFUNCTION(BlueprintCallable)
    void SetLaneIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInsideWindow(int32 aIndex, bool Inside);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInput(int32 aIndex, const FName InputName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHitWindow(float WindowCenter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemovePrompt(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleasedPrompt(int32 aIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedPrompt(int32 aIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPrompt(float Trailsize, const FName InputName, int32 Axis);
    
};

