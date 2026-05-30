#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Blueprint/UserWidget.h"
#include "MinigameButtonSequenceImage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMinigameButtonSequenceImage : public UUserWidget {
    GENERATED_BODY()
public:
    UMinigameButtonSequenceImage();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(const FName Texture, int32 Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCompleted(const FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColor(const FLinearColor Color, bool success);
    
};

