#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DelegateDelegate.h"
#include "EventRewardFrame.generated.h"

class AGenericRewardDispenser;
class USpecialEventUsableComponent;

UCLASS(Blueprintable)
class AEventRewardFrame : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpecialEventUsableComponent* EventUsable;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnEventFinishedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGenericRewardDispenser*> Dispensers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool keyInserted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> EventPlayerIDs;
    
public:
    AEventRewardFrame(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TurnOff();
    
    UFUNCTION(BlueprintCallable)
    void SetKeyInserted(bool NewKeyInserted);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDispenseRewards(bool dispensRewards);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterDispenser(AGenericRewardDispenser* Dispenser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDispensRewards() const;
    
};

