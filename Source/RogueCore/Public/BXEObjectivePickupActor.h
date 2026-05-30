#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicsActor.h"
#include "BXEObjectivePickupActor.generated.h"

class UBXEObjectiveLostDronesTreasure;
class UTerrainScannerStaticMesh;

UCLASS(Blueprintable)
class ABXEObjectivePickupActor : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTerrainScannerStaticMesh* ScannerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBXEObjectiveLostDronesTreasure* Objective;
    
    ABXEObjectivePickupActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RewardObtained();
    
};

