#pragma once
#include "CoreMinimal.h"
#include "DamageValues.h"
#include "PartitionedDamageValues.generated.h"

USTRUCT(BlueprintType)
struct FPartitionedDamageValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageValues Damage;
    
    ROGUECORE_API FPartitionedDamageValues();
};

