#pragma once
#include "CoreMinimal.h"
#include "EUpdateDamageNumberColor.h"
#include "DamageNumberStackingRules.generated.h"

USTRUCT(BlueprintType)
struct FDamageNumberStackingRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpdateDamageNumberColor DamageNumberColorBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageNumberStackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDamageNumberCombinations;
    
    ROGUECORE_API FDamageNumberStackingRules();
};

