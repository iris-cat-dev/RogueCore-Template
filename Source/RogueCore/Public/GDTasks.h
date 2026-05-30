#pragma once
#include "CoreMinimal.h"
#include "GDTasks.generated.h"

class UOpsComTaskAsset;

USTRUCT(BlueprintType)
struct FGDTasks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOpsComTaskAsset*> Tasks;
    
    ROGUECORE_API FGDTasks();
};

