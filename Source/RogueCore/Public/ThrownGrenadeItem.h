#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EThrownGrenadeItemState.h"
#include "Item.h"
#include "RejoinListener.h"
#include "Templates/SubclassOf.h"
#include "ThrownGrenadeItem.generated.h"

class AGrenade;
class UFSDAudioComponent;
class UGrenadeAnimationSet;
class UGrenadeCountAggregator;
class UItemCharacterAnimationSet;
class UPlayerAnimInstance;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AThrownGrenadeItem : public AItem, public IRejoinListener {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGrenadeThrown);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGrenadeThrown OnGrenadeThrown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThrowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GrenadeMeshInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFSDAudioComponent* CookSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrenadeCountAggregator* Aggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGrenadeAnimationSet* DefaultGrenadeAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GrenadeClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGrenade> GrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrenadeCooldownRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxGrenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GrenadeCount, meta=(AllowPrivateAccess=true))
    int32 Grenades;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EThrownGrenadeItemState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool CooldownIsDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool HasRejoinedInitialized;
    
public:
    AThrownGrenadeItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCookTime(float Time);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRemainingCooldown(float CoolDown);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ThrowGrenade(const FVector& StartLocation, const float& cookTime);
    
    UFUNCTION(Reliable, Server)
    void Server_SetState(const EThrownGrenadeItemState itemState);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Resupply(float percentage);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PrepareNewThrow();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResupplyGrenadesAmount(const int32& Amount);
    
    UFUNCTION(BlueprintCallable)
    void ResupplyGrenades(float percentage);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FVector> PredictGrenadePath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowGrenadePath();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrenadeCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrenadeClass();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideGrenadePath();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyThrownGrenadeSucceeded();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyThrownGrenadeReturned();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifyThrownGrenadeFailed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrenadeThrowVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetGrenadeThrowRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrenadeGravity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrenadeDuration() const;
    

    // Fix for true pure virtual functions not being implemented
};

