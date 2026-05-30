#pragma once
#include "CoreMinimal.h"
#include "GMMutatorItem.generated.h"

class UMutator;

USTRUCT(BlueprintType)
struct FGMMutatorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> Mutators;
    
    ROGUECORE_API FGMMutatorItem();
};

