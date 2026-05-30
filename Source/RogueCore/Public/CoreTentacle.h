#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CoreTentacleMovementTarget.h"
#include "CoreTentacleSwayTarget.h"
#include "ECoreTentacleState.h"
#include "TentacleBase.h"
#include "TriggerAI.h"
#include "CoreTentacle.generated.h"

class AActor;
class UDebrisPositioning;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API ACoreTentacle : public ATentacleBase, public ITriggerAI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MovementTarget, meta=(AllowPrivateAccess=true))
    FCoreTentacleMovementTarget MovementTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ECoreTentacleState TentacleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCoreTentacleSwayTarget SwayTarget;
    
public:
    ACoreTentacle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTentacleState(const ECoreTentacleState NewState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSwayTarget(const FCoreTentacleSwayTarget& Target, const bool SwayImmediately);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMovementTarget(const FCoreTentacleMovementTarget& Target);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReleasedActor(AActor* Actor, bool FullGrabElasped);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseBind();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementTarget();
    
    UFUNCTION(BlueprintCallable)
    void GrabbedActor(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECoreTentacleState GetTentacleState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCoreTentacleMovementTarget GetMovementTarget() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool FindBurrowEntrancePoint(UDebrisPositioning* Debris, const FVector& AroundPoint, float SearchRadius, float BurrowDepth, FVector& OutLocation) const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReleaseBind();
    

    // Fix for true pure virtual functions not being implemented
};

