#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "RandomSelectorItem.generated.h"

UCLASS(Blueprintable)
class ARandomSelectorItem : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max;
    
    ARandomSelectorItem(const FObjectInitializer& ObjectInitializer);

};

