#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "ExpeniteDiscountMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UExpeniteDiscountMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpeniteDiscount;
    
    UExpeniteDiscountMutator();

};

