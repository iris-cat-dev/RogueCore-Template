#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ActorTrackingSubsystem.generated.h"

UCLASS(Blueprintable)
class UActorTrackingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UActorTrackingSubsystem();

};

