#pragma once
#include "CoreMinimal.h"
#include "PostConstructionSpawnData.h"
#include "TerrainPostConstructionSpawnData.generated.h"

class UCurveFloat;
class UDebrisPositioning;

UCLASS(Blueprintable, EditInlineNew)
class UTerrainPostConstructionSpawnData : public UPostConstructionSpawnData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceCostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToOtherLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToImportantLocations;
    
public:
    UTerrainPostConstructionSpawnData();

};

