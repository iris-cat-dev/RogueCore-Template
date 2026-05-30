#pragma once
#include "CoreMinimal.h"
#include "AbilityItem.h"
#include "DroneControllerUseInfo.h"
#include "EAbilityDroneState.h"
#include "ECharacterState.h"
#include "Templates/SubclassOf.h"
#include "AbilityDroneController.generated.h"

class AAbilityDrone;
class AActor;
class UAnimMontage;
class UDialogDataAsset;
class USkeletalMeshComponent;
class UStatusEffect;

UCLASS(Blueprintable)
class AAbilityDroneController : public AAbilityItem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAbilityDroneControllerDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FPBirdMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TPBirdMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseExtraBurstSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> SentOutStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_PetDrone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_PetDrone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Bird_Pet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Bird_Equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_AlternateEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Bird_ReceivedBird;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_ReceivedBird;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_ReceivedBird;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_ReceivedBird;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_Activation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RecallAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_RecallAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_ReactivateDroneAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_ReactivateDroneAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Bird_JumpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Bird_JumpEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* PrimaryCommandedShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* SecondaryCommandedShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ReviveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DroneInstances, meta=(AllowPrivateAccess=true))
    TArray<AAbilityDrone*> DroneInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAbilityDrone> DroneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeForReviveWithoutLineOfSight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityDroneControllerDelegate OnReviveTargetChanged;
    
public:
    AAbilityDroneController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UseSecondary(FDroneControllerUseInfo droneInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UsePrimary(FDroneControllerUseInfo droneInfo);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ShowRecall(bool sentOut);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ShowActivation(bool sentOut);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_RecallDrones();
    
    UFUNCTION(BlueprintCallable)
    void OnUsingFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReviveActionTriggered();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DroneInstances();
    
    UFUNCTION(BlueprintCallable)
    void OnDroneStateChanged(EAbilityDroneState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroneReviveActivated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroneOrder(bool sentOut);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDroneDestroyed(AActor* Drone);
    
    UFUNCTION(BlueprintCallable)
    void OnDroneAttacked();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCharacterStateChanged(ECharacterState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetReviveTarget() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_ShowRecall(bool sentOut);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_ShowActivation(bool sentOut);
    
};

