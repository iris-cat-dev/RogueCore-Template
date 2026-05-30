#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Objective.h"
#include "Templates/SubclassOf.h"
#include "HackableBuildingObjective.generated.h"

class AProceduralSetup;
class ARessuplyPod;
class UDebrisPositioning;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHackableBuildingObjective : public UObjective {
    GENERATED_BODY()
public:
    UHackableBuildingObjective(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void DropOverCharger(AProceduralSetup* setup, const FVector& buildingLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> generatorClass);
    
};

