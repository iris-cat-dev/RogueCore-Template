#pragma once
#include "CoreMinimal.h"
#include "FSDTaskInfo.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FFSDTaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FFSDTaskInfo();
};

