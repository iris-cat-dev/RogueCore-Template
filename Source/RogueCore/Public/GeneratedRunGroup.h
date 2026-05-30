#pragma once
#include "CoreMinimal.h"
#include "GeneratedRunsForBiome.h"
#include "GeneratedRunGroup.generated.h"

USTRUCT(BlueprintType)
struct FGeneratedRunGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedRunsForBiome> AvailableRuns;
    
    ROGUECORE_API FGeneratedRunGroup();
};

