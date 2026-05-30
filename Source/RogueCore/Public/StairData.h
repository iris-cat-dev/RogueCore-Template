#pragma once
#include "CoreMinimal.h"
#include "StairData.generated.h"

USTRUCT(BlueprintType)
struct FStairData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Version;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Segments;
    
    ROGUECORE_API FStairData();
};

