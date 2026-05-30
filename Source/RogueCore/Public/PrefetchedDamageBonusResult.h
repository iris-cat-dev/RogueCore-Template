#pragma once
#include "CoreMinimal.h"
#include "PrefetchedDamageBonusResult.generated.h"

class UDamageBonusBase;
class UDamageTag;

USTRUCT(BlueprintType)
struct FPrefetchedDamageBonusResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDamageBonusBase*> Bonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BuildUpCritChance;
    
    ROGUECORE_API FPrefetchedDamageBonusResult();
};

