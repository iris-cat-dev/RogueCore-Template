#pragma once
#include "CoreMinimal.h"
#include "SoftManualSingleStepDescription.h"
#include "ManualStepDescription.generated.h"

USTRUCT(BlueprintType)
struct FManualStepDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoHeadline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftManualSingleStepDescription> Steps;
    
    ROGUECORE_API FManualStepDescription();
};

