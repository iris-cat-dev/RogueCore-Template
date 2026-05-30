#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DamageListener.h"
#include "FSDMockDamageListener.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFSDMockDamageListener : public UActorComponent, public IDamageListener {
    GENERATED_BODY()
public:
    UFSDMockDamageListener(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

