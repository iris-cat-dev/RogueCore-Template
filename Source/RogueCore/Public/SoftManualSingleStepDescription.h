#pragma once
#include "CoreMinimal.h"
#include "SoftManualSingleStepDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSoftManualSingleStepDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Headline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RichDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    ROGUECORE_API FSoftManualSingleStepDescription();
};

