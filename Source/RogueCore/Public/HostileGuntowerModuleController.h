#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
#include "FSDAIController.h"
#include "HostileGuntowerModuleController.generated.h"

class AActor;
class UAIPerceptionComponent;

UCLASS(Blueprintable)
class AHostileGuntowerModuleController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* Perception;
    
    AHostileGuntowerModuleController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
};

