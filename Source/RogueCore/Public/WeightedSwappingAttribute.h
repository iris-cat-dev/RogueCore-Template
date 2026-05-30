#pragma once
#include "CoreMinimal.h"
#include "WeightedSwappingAttribute.generated.h"

class UBXEAttributeUnlock;

USTRUCT(BlueprintType)
struct FWeightedSwappingAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEAttributeUnlock* Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ROGUECORE_API FWeightedSwappingAttribute();
};

