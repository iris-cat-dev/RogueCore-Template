#pragma once
#include "CoreMinimal.h"
#include "FSDThreadStats.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FFSDThreadStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Running;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TaskQueued;
    
    FFSDThreadStats();
};

