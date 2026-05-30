#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ElementCondition.h"
#include "TagsElementCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTagsElementCondition : public UElementCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Query;
    
public:
    UTagsElementCondition();

};

