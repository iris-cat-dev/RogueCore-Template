#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DelegateDelegate.h"
#include "EBXECompanionDroneState.h"
#include "FSDAIController.h"
#include "Templates/SubclassOf.h"
#include "BXECompanionDroneController.generated.h"

class AActor;
class ABXECompanionDrone;
class APlayerCharacter;
class ATeamElevator;
class UBehaviorTree;
class UCompanionDroneInteractionComponent;
class UDialogDataAsset;
class UResourceData;

UCLASS(Blueprintable)
class ABXECompanionDroneController : public AFSDAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnNegotiationFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<APlayerCharacter*> ListenToSalutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATeamElevator> ElevatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCompanionDroneInteractionComponent> CurrentInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* ArtifactResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* PotentExpeniteResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* Behaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DroneCallCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinUpdateTargetInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxUpdateTargetInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArtifactProcessingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PotentExpeniteProcessingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SaluteDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TakeoffTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingStuckTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABXECompanionDrone> Drone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StoreRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutCalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBXECompanionDroneState, UDialogDataAsset*> ShoutsWhenCannotCall;
    
public:
    ABXECompanionDroneController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void StartManualNegotiation();
    
    UFUNCTION(BlueprintCallable)
    void Salute();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseFromMachine();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ElevatorPressed(ATeamElevator* Elevator);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayerSaluted(APlayerCharacter* ShoutingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void PlayerJoined(APlayerCharacter* aPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnUsed();
    
    UFUNCTION(BlueprintCallable)
    void OnStoppedUsing();
    
    UFUNCTION(BlueprintCallable)
    void OnResourceDeposited(UResourceData* Resource, float Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnNegotiationStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNegotiationComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnMessage(FName Name);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateCountDownStarted(const FText& countdownText);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateCountDownEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnEndDeposit(APlayerCharacter* Player);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDroneLeftState(EBXECompanionDroneState State);
    
    UFUNCTION(BlueprintCallable)
    void OnDroneEnterState(EBXECompanionDroneState State);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDroneCalled(FVector Location, APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnDeposit(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void ForceLandedFallback();
    
    UFUNCTION(BlueprintCallable)
    void ElevatorUsed(ATeamElevator* Elevator);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CallToMachine(AActor* Target);
    
};

