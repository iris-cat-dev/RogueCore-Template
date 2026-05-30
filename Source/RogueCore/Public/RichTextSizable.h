#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "Components/RichTextBlock.h"
#include "RichTextSizable.generated.h"

UCLASS(Blueprintable)
class URichTextSizable : public URichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideDefaultFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor OverrideDefaultFontColor;
    
public:
    URichTextSizable();

protected:
    UFUNCTION(BlueprintCallable)
    void SetDefaultFontSize(int32 InFontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultFontColor(const FLinearColor& InColor);
    
};

