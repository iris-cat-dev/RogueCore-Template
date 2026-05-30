#pragma once
#include "CoreMinimal.h"
#include "ScanObjects.generated.h"

class AActor;
class AFSDPawn;

USTRUCT(BlueprintType)
struct FScanObjects {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> PointsOfInterest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFSDPawn>> FoundPawns;
    
    ROGUECORE_API FScanObjects();
};

