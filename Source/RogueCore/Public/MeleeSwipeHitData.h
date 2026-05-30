#pragma once
#include "CoreMinimal.h"
#include "MeleeSwipeHitData.generated.h"

USTRUCT(BlueprintType)
struct FMeleeSwipeHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ActorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaterialIndex;
    
    ROGUECORE_API FMeleeSwipeHitData();
};

