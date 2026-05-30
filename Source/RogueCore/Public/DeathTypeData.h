#pragma once
#include "CoreMinimal.h"
#include "EDeathType.h"
#include "DeathTypeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDeathTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeathType DeathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Causer;
    
    ROGUECORE_API FDeathTypeData();
};

