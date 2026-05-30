#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlaceParametersSimple.generated.h"

class APlacementDeviceActor;
class APlayerCharacter;

USTRUCT(BlueprintType)
struct FPlaceParametersSimple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlacementDeviceActor> PlacementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PlacingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardPlaceDistance;
    
    ROGUECORE_API FPlaceParametersSimple();
};

