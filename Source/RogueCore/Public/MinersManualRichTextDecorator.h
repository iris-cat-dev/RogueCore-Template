#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "Templates/SubclassOf.h"
#include "MinersManualRichTextDecorator.generated.h"

class UMinersManualRichTextToolTip;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UMinersManualRichTextDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMinersManualRichTextToolTip> ToolTipClass;
    
public:
    UMinersManualRichTextDecorator();

};

