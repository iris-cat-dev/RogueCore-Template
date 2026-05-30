#pragma once
#include "CoreMinimal.h"
#include "ManualSingleStepDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FManualSingleStepDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Headline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RichDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    ROGUECORE_API FManualSingleStepDescription();
};

