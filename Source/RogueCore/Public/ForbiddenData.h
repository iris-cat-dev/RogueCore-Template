#pragma once
#include "CoreMinimal.h"
#include "ForbiddenData.generated.h"

USTRUCT(BlueprintType)
struct FForbiddenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForbidPercent;
    
    ROGUECORE_API FForbiddenData();
};

