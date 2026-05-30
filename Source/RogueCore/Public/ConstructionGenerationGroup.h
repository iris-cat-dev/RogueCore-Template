#pragma once
#include "CoreMinimal.h"
#include "ConstructionGenerationGroup.generated.h"

class AStructureActor;

USTRUCT(BlueprintType)
struct FConstructionGenerationGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AStructureActor>> Constructions;
    
    ROGUECORE_API FConstructionGenerationGroup();
};

