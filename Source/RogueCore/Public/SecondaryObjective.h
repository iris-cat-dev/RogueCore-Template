#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SecondaryObjective.generated.h"

class UObjective;

USTRUCT(BlueprintType)
struct FSecondaryObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjective> Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ROGUECORE_API FSecondaryObjective();
};

