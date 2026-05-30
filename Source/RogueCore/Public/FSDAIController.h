#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "ActorDelegateDelegate.h"
#include "AIController.h"
#include "BoolDelegateDelegate.h"
#include "DelegateDelegate.h"
#include "MessageBehaviorTreeDelegate.h"
#include "FSDAIController.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable)
class AFSDAIController : public AAIController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterDelegate, APlayerCharacter*, PlayerCharacter);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMessageBehaviorTree OnMessageBehaviorTreeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnAlertedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnSpawnAnimationCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> LOSTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> TargetedPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCharacterDelegate OnTargetPlayerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDelegate OnTargetUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnStaggeredChanged;
    
public:
    AFSDAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStaggered(bool IsStaggered);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAlerted(bool isAlerted);
    
    UFUNCTION(BlueprintCallable)
    void ResumeLogic();
    
    UFUNCTION(BlueprintCallable)
    void RegisterBlackboardChanges(const FName& Key);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    
public:
    UFUNCTION(BlueprintCallable)
    void PauseLogic();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackingChanged(bool attacking);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnAnimationCompleted() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetIsAlerted() const;
    
};

