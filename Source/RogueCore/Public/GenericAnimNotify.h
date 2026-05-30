#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "GenericAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UGenericAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UGenericAnimNotify();

};

