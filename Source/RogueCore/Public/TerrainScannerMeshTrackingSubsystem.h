#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "TerrainScannerMeshTrackingSubsystem.generated.h"

class UTerrainScannerStaticMesh;

UCLASS(Blueprintable)
class UTerrainScannerMeshTrackingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTerrainScannerStaticMesh*> Instances;
    
public:
    UTerrainScannerMeshTrackingSubsystem();

};

