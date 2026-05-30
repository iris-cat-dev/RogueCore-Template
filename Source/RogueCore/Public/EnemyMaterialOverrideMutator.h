#pragma once
#include "CoreMinimal.h"
#include "EnemyFilter.h"
#include "Mutator.h"
#include "EnemyMaterialOverrideMutator.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class UEnemyMaterialOverrideMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyFilter EnemyFilter;
    
    UEnemyMaterialOverrideMutator();

};

