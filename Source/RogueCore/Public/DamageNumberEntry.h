#pragma once
#include "CoreMinimal.h"
#include "DamageNumberEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDamageNumberEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    ROGUECORE_API FDamageNumberEntry();
};

