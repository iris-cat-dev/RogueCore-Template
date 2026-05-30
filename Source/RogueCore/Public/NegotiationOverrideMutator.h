#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "NegotiationOverrideMutator.generated.h"

class UBXEUnlockCollection;
class UUnlockCollectionTag;

UCLASS(Blueprintable, EditInlineNew)
class UNegotiationOverrideMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockCollection* NegotiationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUnlockCollectionTag*> IgnoreOverrideFor;
    
    UNegotiationOverrideMutator();

};

