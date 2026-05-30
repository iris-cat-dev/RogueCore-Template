#pragma once
#include "CoreMinimal.h"
#include "GymCollectiveResources.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FGymCollectiveResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    ROGUECORE_API FGymCollectiveResources();
};

