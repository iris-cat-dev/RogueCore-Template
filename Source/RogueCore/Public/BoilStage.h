#pragma once
#include "CoreMinimal.h"
#include "BoilStage.generated.h"

USTRUCT(BlueprintType)
struct FBoilStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleMultiplier;
    
    ROGUECORE_API FBoilStage();
};

