#pragma once
#include "CoreMinimal.h"
#include "EStageType.h"
#include "RunMutatorOverrides.h"
#include "RunObjectiveOverrides.h"
#include "RunTemplateObjectiveSettings.h"
#include "RunTemplateStageSettings.h"
#include "RunTemplateStage.generated.h"

class UReward;
class UStageTemplateDifficulty;
class UWorld;

USTRUCT(BlueprintType)
struct FRunTemplateStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NextBranchOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageTemplateDifficulty* StageDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UReward*> RewardsForCompleting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunTemplateObjectiveSettings ObjectiveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunObjectiveOverrides ObjectiveOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunMutatorOverrides MutatorOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunTemplateStageSettings StageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> SafeRoomLevel;
    
    ROGUECORE_API FRunTemplateStage();
};

