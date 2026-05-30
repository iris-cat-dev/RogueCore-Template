#pragma once
#include "CoreMinimal.h"
#include "DamageValues.generated.h"

USTRUCT(BlueprintType)
struct FDamageValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    ROGUECORE_API FDamageValues();
};

