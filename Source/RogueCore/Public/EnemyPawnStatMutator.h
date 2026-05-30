#pragma once
#include "CoreMinimal.h"
#include "EnemyFilter.h"
#include "Mutator.h"
#include "EnemyPawnStatMutator.generated.h"

class UPawnStat;

UCLASS(Blueprintable, EditInlineNew)
class UEnemyPawnStatMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyFilter EnemyFilter;
    
    UEnemyPawnStatMutator();

};

