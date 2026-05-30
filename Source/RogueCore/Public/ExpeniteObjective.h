#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ExpeniteObjective.generated.h"

class UObjective;

USTRUCT(BlueprintType)
struct FExpeniteObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjective> Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ROGUECORE_API FExpeniteObjective();
};

