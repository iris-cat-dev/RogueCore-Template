#pragma once
#include "CoreMinimal.h"
#include "TXRunInfo.h"
#include "TXStageInfo.h"
#include "TXGameLevelLoad.generated.h"

USTRUCT(BlueprintType)
struct FTXGameLevelLoad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float load_time_in_seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> spawned_constructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXRunInfo run_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTXStageInfo stage_info;
    
    ROGUECORE_API FTXGameLevelLoad();
};

