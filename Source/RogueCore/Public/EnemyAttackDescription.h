#pragma once
#include "CoreMinimal.h"
#include "EDamageType.h"
#include "EEnemyAttackType.h"
#include "EnemyAttackDescription.generated.h"

USTRUCT(BlueprintType)
struct FEnemyAttackDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyAttackType Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageType DamageType;
    
    ROGUECORE_API FEnemyAttackDescription();
};

