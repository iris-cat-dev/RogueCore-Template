#pragma once
#include "CoreMinimal.h"
#include "HitscanDelayedImpact.generated.h"

class UFSDPhysicalMaterial;

USTRUCT(BlueprintType)
struct FHitscanDelayedImpact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* PhysicalMaterial;
    
    ROGUECORE_API FHitscanDelayedImpact();
};

