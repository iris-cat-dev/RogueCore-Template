#pragma once
#include "CoreMinimal.h"
#include "OpsComTaskTierCounter.h"
#include "OpsComTaskSave.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FOpsComTaskSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOpsComTaskTierCounter> TaskTierCounters;
    
public:
    FOpsComTaskSave();
};

