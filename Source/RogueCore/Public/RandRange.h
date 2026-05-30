#pragma once
#include "CoreMinimal.h"
#include "RandRange.generated.h"

USTRUCT(BlueprintType)
struct FRandRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float max;
    
    ROGUECORE_API FRandRange();
};

