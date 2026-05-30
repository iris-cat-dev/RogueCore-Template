#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DamageTypeDescription.h"
#include "EMinersManualDescriptionList.h"
#include "MinersManualRichTextToolTip.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinersManualRichTextToolTip : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMinersManualDescriptionList ManualList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ManualIndex;
    
    UMinersManualRichTextToolTip();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void TryGetDescription(FDamageTypeDescription& OutDescription, bool& OutSuccess) const;
    
};

