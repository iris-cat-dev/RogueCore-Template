#pragma once
#include "CoreMinimal.h"
#include "ActorTemplateSequenceArray.generated.h"

class UTemplateSequence;

USTRUCT(BlueprintType)
struct FActorTemplateSequenceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTemplateSequence*> Templates;
    
    ROGUECORE_API FActorTemplateSequenceArray();
};

