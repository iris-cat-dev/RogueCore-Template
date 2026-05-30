#pragma once
#include "CoreMinimal.h"
#include "ShowroomStage.h"
#include "PlanetShowroomStage.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class APlanetShowroomStage : public AShowroomStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraZoomInPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CameraZoomOutPoint;
    
    APlanetShowroomStage(const FObjectInitializer& ObjectInitializer);

};

