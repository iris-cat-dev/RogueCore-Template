#pragma once
#include "CoreMinimal.h"
#include "PlaceActorPathRequirement.generated.h"

USTRUCT(BlueprintType)
struct FPlaceActorPathRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequirePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDistance;
    
    ROGUECORE_API FPlaceActorPathRequirement();
};

