#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TrackingActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ROGUECORE_API ATrackingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    ATrackingActor(const FObjectInitializer& ObjectInitializer);

};

