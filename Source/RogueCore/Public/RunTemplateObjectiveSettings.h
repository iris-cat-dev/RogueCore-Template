#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "RunTemplateObjectiveSettings.generated.h"

USTRUCT(BlueprintType)
struct FRunTemplateObjectiveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval AmountOfSecondaryObjectives;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval AmountOfExpeniteObjectives;
    
    ROGUECORE_API FRunTemplateObjectiveSettings();
};

