#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "BXERiftLineOfSightTraceLocation.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBXERiftLineOfSightTraceLocation : public USceneComponent {
    GENERATED_BODY()
public:
    UBXERiftLineOfSightTraceLocation(const FObjectInitializer& ObjectInitializer);

};

