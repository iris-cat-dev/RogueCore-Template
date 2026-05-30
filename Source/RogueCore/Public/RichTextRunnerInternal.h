#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TextBlockStyle -FallbackName=TextBlockStyle
#include "Components/RichTextBlock.h"
#include "RichTextRunnerInternal.generated.h"

UCLASS(Blueprintable)
class URichTextRunnerInternal : public URichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTextBlockStyle> CachedTextStyles;
    
public:
    URichTextRunnerInternal();

};

