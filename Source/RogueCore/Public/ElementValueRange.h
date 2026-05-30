#pragma once
#include "CoreMinimal.h"
#include "ElementValueRange.generated.h"

USTRUCT(BlueprintType)
struct FElementValueRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max;
    
    ROGUECORE_API FElementValueRange();
};

