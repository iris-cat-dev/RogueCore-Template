#pragma once
#include "CoreMinimal.h"
#include "AttributeWeightPoolUnlock.generated.h"

class UBXEAttributeUnlock;

USTRUCT(BlueprintType)
struct FAttributeWeightPoolUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEAttributeUnlock* Unlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ROGUECORE_API FAttributeWeightPoolUnlock();
};

