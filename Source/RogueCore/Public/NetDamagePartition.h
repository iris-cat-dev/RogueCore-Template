#pragma once
#include "CoreMinimal.h"
#include "EDamageVector.h"
#include "NetDamagePartition.generated.h"

class UDamageClass;

USTRUCT(BlueprintType)
struct FNetDamagePartition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageVector DamageVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    ROGUECORE_API FNetDamagePartition();
};

