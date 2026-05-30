#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EEscortHammeState.h"
#include "EscortHammerMovementSetup.h"
#include "EscortHammerMovementState.h"
#include "EscortHammerObjectiveActor.generated.h"

class UPathfinderCollisionComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ROGUECORE_API AEscortHammerObjectiveActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HammerRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HammerMovementRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HammerLocationStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HammerLocationEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HammerPathfinderCollisionRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPathfinderCollisionComponent* HammerPathfinderCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEscortHammeState, FEscortHammerMovementSetup> MovementSetups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EEscortHammeState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementState, meta=(AllowPrivateAccess=true))
    FEscortHammerMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementState, meta=(AllowPrivateAccess=true))
    FEscortHammerMovementState LocalMovementState;
    
public:
    AEscortHammerObjectiveActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHammerTargetVelocityMultiplier(float TargetVelocityMultiplier);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVelocityChanged(float NewVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(EEscortHammeState NewState, EEscortHammeState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EEscortHammeState prevState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoved(float CurrentLocationPerc);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AdvanceState();
    
};

