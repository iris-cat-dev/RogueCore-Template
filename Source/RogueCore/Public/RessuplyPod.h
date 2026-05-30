#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "ERessuplyPodState.h"
#include "Templates/SubclassOf.h"
#include "RessuplyPod.generated.h"

class ARessuplyPod;
class UCurveFloat;
class UDamageComponent;
class UDialogDataAsset;
class UObject;

UCLASS(Blueprintable)
class ARessuplyPod : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRessuplyPodStateDelegate, ARessuplyPod*, InPod, ERessuplyPodState, InState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRessuplyPodStateDelegate OnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KillRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionShoutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutDialogOrderAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DialogOrderAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DialogPodArrived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* CurrentMissionShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetLocation, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ERessuplyPodState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetDropTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ServerDropProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DropCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PlayerSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseToImpactDistance;
    
public:
    ARessuplyPod(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIdling();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTunnelBLocked();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(ERessuplyPodState oldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDropStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroppodImpact();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroppodCloseToImpact();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* DropToTarget(UObject* WorldContextObject, TSubclassOf<ARessuplyPod> podClass, const FVector& Location, AActor* requester);
    

    UFUNCTION(BlueprintCallable)
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override {}
    UFUNCTION(BlueprintCallable)
    virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override {return false;}
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override{return false;}
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override{return false;}
    
protected:
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTagContainer BP_GetOwnedGameplayTags() const override { return FGameplayTagContainer{};}
    
};

