#pragma once
#include "CoreMinimal.h"
#include "AFlyingBug.h"
#include "ActorDelegateDelegate.h"
#include "DataDrone.generated.h"

class USpinDeathComponent;

UCLASS(Blueprintable)
class ADataDrone : public AAFlyingBug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDelegate OnDataDroneKilled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpinDeathComponent* SpinDeathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDataDroneFleeing, meta=(AllowPrivateAccess=true))
    bool IsDataDroneFleeing;
    
public:
    ADataDrone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnGuardDrones();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDataDroneIsFleeing(bool InFleeing);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDataDroneFleeing(bool oldFleeing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFleeingChanged(bool NewFleeing);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastDataDroneKilled();
    
};

