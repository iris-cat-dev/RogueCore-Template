#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DroneDestinationMarker.generated.h"

UCLASS(Blueprintable)
class ADroneDestinationMarker : public AActor {
    GENERATED_BODY()
public:
    ADroneDestinationMarker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Activate();
    
};

