#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "DelegateDelegate.h"
#include "ECharacterState.h"
#include "OnGameStateDelegateDelegate.h"
#include "PerkInputUnlockComponent.h"
#include "ContingencyPlanUnlockComponent.generated.h"

class AFSDGameState;
class UHealthComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UContingencyPlanUnlockComponent : public UPerkInputUnlockComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnContingencyStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnContingencyEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameStateDelegate OnGameStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle Handle_Timeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle Handle_ActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Used;
    
public:
    UContingencyPlanUnlockComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartContingencyPlan();
    
    UFUNCTION(BlueprintCallable)
    void SetUsed(bool NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_Triggered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_StartContingencyPlan();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerStateChanced(ECharacterState State);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerRevived();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDied(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateChanged(AFSDGameState* GameState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEffectActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndContingencyPlan();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_Triggered();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_OnContingencyStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_OnContingencyEnded();
    
};

