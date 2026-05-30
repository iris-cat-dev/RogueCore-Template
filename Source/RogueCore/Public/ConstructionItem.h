#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ConstructionItem.generated.h"

class AStructureActor;

USTRUCT(BlueprintType)
struct FConstructionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AStructureActor> StructureClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnBudgetCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    ROGUECORE_API FConstructionItem();
};

