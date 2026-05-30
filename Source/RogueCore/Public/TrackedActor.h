#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ActorTrackingCheatInterface.h"
#include "TrackedActor.generated.h"

UCLASS(Blueprintable)
class ATrackedActor : public AActor, public IActorTrackingCheatInterface {
    GENERATED_BODY()
public:
    ATrackedActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetCheatTrackUsingOutline(AActor* Target, bool Apply);
    

    // Fix for true pure virtual functions not being implemented
};

