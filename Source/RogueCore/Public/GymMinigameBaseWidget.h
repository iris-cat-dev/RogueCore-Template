#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GymMinigameBaseWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UGymMinigameBaseWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UGymMinigameBaseWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSecondaryHitAreaSize(float Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSecondaryHitAreaLocation(float PercentageValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRepTimerProgressbar(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRepsLeft(int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPersonalBest(int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLives(int32 Lives);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHitAreaVisibility(bool visible, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHitAreaSize(float Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHitAreaLocation(float PercentageValue, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetExerciseIcon(UTexture2D* Texture, const TArray<FString>& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCrosshairAreaLocation(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IFrameChange(bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCrosshairHitSize();
    
};

