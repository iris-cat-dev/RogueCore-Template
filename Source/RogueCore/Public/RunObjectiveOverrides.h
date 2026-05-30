#pragma once
#include "CoreMinimal.h"
#include "ERunItemOverrideType.h"
#include "ERunListOverrideType.h"
#include "Templates/SubclassOf.h"
#include "RunObjectiveOverrides.generated.h"

class UObjective;

USTRUCT(BlueprintType)
struct FRunObjectiveOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunItemOverrideType PrimaryObjectiveOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjective> PrimaryObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunListOverrideType SecondaryObjectivesOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UObjective>> SecondaryObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunListOverrideType ExpeniteObjectivesOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UObjective>> ExpeniteObjectives;
    
    ROGUECORE_API FRunObjectiveOverrides();
};

