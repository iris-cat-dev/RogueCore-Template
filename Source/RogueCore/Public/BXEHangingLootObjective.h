#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BXEBlueprintControlledObjective.h"
#include "Templates/SubclassOf.h"
#include "BXEHangingLootObjective.generated.h"

class AActor;
class UCurveFloat;
class UDebrisPositioning;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBXEHangingLootObjective : public UBXEBlueprintControlledObjective {
    GENERATED_BODY()
public:
    UBXEHangingLootObjective(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnSuspender(UObject* WorldContextObject, const TSubclassOf<AActor> suspenderClass, const FVector& EndPoint, const FVector& endPointNormal, const FVector offsetToLineStart, UDebrisPositioning* debrisPosition, int32 maxTries, UCurveFloat* CostCurve, const TArray<FVector>& LocationsToAvoid);
    
};

