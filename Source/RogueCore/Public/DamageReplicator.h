#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DamageNumberReplicationData.h"
#include "DamageReplicator.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UDamageReplicator : public UActorComponent {
    GENERATED_BODY()
public:
    UDamageReplicator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ReceiveMinionDamageNumber(const FDamageNumberReplicationData& Data);
    
};

