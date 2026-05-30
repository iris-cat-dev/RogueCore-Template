#pragma once
#include "CoreMinimal.h"
#include "FSDTaskInfo.h"
#include "FSDThreadGroup.h"
#include "FSDTerrainGenerationStats.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FFSDTerrainGenerationStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentAsyncTaskDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PLSPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRunningTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFSDThreadGroup> ThreadGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFSDTaskInfo> RunningTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFSDTaskInfo> FinishedTasks;
    
    FFSDTerrainGenerationStats();
};

