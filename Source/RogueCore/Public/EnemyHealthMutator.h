#pragma once
#include "CoreMinimal.h"
#include "EEnemyHealthMutatorListType.h"
#include "Mutator.h"
#include "EnemyHealthMutator.generated.h"

class UEnemyID;

UCLASS(Blueprintable, EditInlineNew)
class UEnemyHealthMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyID*> Ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyHealthMutatorListType ListType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
public:
    UEnemyHealthMutator();

};

