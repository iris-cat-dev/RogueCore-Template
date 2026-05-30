#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BeginUsingDelegateDelegate.h"
#include "CharacterUseState.h"
#include "CustomUsable.h"
#include "DepositingEventDelegate.h"
#include "ECustomUsableType.h"
#include "EInputKeys.h"
#include "EndUsingDelegateDelegate.h"
#include "CharacterUseComponent.generated.h"

class AActor;
class APlayerCharacter;
class UUsableComponent;
class UUsableComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterUseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginUsingDelegate OnBeginHoveringEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndUsingDelegate OnEndHoveringEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginUsingDelegate OnBeginUsingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndUsingDelegate OnEndUsingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDepositingEvent OnDepositingBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDepositingEvent OnDepositingEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginUsingDelegate OnUsableTriggered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FCharacterUseState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterUseState LocalState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterUseState LastRequestedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUsableComponentBase* LastBeginUseUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUsableComponentBase*> UsableComponentsCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUsableComponentBase* HoveringUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCustomUsable> CustomUsableComponents;
    
public:
    UCharacterUseComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetState(const FCharacterUseState& NewState);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_OnUsedBy(UUsableComponent* usable, APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCustomUsableComponent(UUsableComponentBase* usable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(const FCharacterUseState& oldState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyUsableUsed(UUsableComponentBase* usable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookingAtUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookingAtDepositable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUseProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLookingAtActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUsing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDepositing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUsableComponentBase* GetHoveringUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUsableComponentBase* GetActiveUsable() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnUsedBy(UUsableComponent* InUsable, EInputKeys Key);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_UseEnded(const FCharacterUseState& oldState);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddCustomUsableComponent(UUsableComponentBase* usable, ECustomUsableType eType);
    
};

