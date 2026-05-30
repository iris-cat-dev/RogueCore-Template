#pragma once
#include "CoreMinimal.h"
#include "RunBranchStage.h"
#include "RunBranchSet.generated.h"

USTRUCT(BlueprintType)
struct FRunBranchSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRunBranchStage> Stages;
    
    ROGUECORE_API FRunBranchSet();
};

