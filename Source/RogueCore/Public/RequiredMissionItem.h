#pragma once
#include "CoreMinimal.h"
#include "RequiredMissionItem.generated.h"

class UStageComplexity;
class UStageDuration;
class UStageTemplate;

USTRUCT(BlueprintType)
struct FRequiredMissionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageTemplate* MissionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageComplexity* Complexity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageDuration* duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanHaveMutators;
    
    ROGUECORE_API FRequiredMissionItem();
};

