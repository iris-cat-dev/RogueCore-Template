#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PrimaryObjective.generated.h"

class UObjective;

USTRUCT(BlueprintType)
struct FPrimaryObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjective> Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ROGUECORE_API FPrimaryObjective();
};

