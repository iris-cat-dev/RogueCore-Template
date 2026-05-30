#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextWrappingPolicy -FallbackName=ETextWrappingPolicy
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "Components/TextBlock.h"
#include "FSDLabelWidget.generated.h"

UCLASS(Blueprintable)
class UFSDLabelWidget : public UTextBlock {
    GENERATED_BODY()
public:
    UFSDLabelWidget();

    UFUNCTION(BlueprintCallable)
    void SetWrapTextAt(float WrapAt);
    
    UFUNCTION(BlueprintCallable)
    void SetWrappingPolicy(ETextWrappingPolicy Policy);
    
    UFUNCTION(BlueprintCallable)
    void SetMargin(FMargin NewMargin);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float percentage);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 Size);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFontSize() const;
    
};

