#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "RichIconRow.h"
#include "Templates/SubclassOf.h"
#include "RichTextIconDecorator.generated.h"

class URichIconWidget;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class URichTextIconDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Prefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URichIconWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRichIconRow> Icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEmbedToolTipText;
    
    URichTextIconDecorator();

    UFUNCTION(BlueprintCallable)
    void SetEmbedToolTipText(bool InEmbed);
    
};

