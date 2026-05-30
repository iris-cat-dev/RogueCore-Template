#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "GenericMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGenericMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UGenericMutator();

};

