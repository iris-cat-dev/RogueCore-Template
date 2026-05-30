#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "BlitzMovementState.h"
#include "PerkInputUnlockComponent.h"
#include "BlitzUnlockComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBlitzUnlockComponent : public UPerkInputUnlockComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumBlitzAirTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlitzCollisionChannel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnReplicateMovementState, meta=(AllowPrivateAccess=true))
    FBlitzMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsBlitzingLocally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle BlitzTimeoutHandle;
    
public:
    UBlitzUnlockComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopBlitz();
    
    UFUNCTION(BlueprintCallable)
    void StartBlitzInCameraDirection();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetMovementState(const FBlitzMovementState& NewMovementState);
    
    UFUNCTION(BlueprintCallable)
    void OnReplicateMovementState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlitzStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBlitzStarted();
    
};

