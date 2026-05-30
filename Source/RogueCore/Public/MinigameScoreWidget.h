#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinigameScoreWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMinigameScoreWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMinigameScoreWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTarget(int32 Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScore(int32 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNumber(int32 newSetnumber);
    
};

