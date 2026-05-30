#pragma once
#include "CoreMinimal.h"
#include "RunRiskVector.h"
#include "RunSetup.h"
#include "RunState.generated.h"

USTRUCT(BlueprintType)
struct FRunState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunSetup RunSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveStageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CompletedStages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRunRiskVector> AdditionalRiskVectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRiftBossFightCompleted;
    
    ROGUECORE_API FRunState();
};

