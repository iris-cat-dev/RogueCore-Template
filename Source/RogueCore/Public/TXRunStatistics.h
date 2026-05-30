#pragma once
#include "CoreMinimal.h"
#include "TXRunStatistics.generated.h"

USTRUCT(BlueprintType)
struct FTXRunStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 runs_completed_at_depth1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 runs_completed_at_depth2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 runs_completed_at_depth3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 runs_completed_at_depth4;
    
    ROGUECORE_API FTXRunStatistics();
};

