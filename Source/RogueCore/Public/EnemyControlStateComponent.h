#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "CharacterStateComponent.h"
#include "ControlEnemyState.h"
#include "EEnemyControlState.h"
#include "EnemyControlStateComponent.generated.h"

class APlayerCharacter;
class UAIPlayerControlComponent;
class UAnimMontage;
class UDialogDataAsset;
class UPhysicsAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UEnemyControlStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseThirdPersonCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StateData, meta=(AllowPrivateAccess=true))
    FControlEnemyState StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ControlState, meta=(AllowPrivateAccess=true))
    EEnemyControlState ControlState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FQuat AngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FQuat ControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* GetOnShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* OldPhysicsAsset;
    
public:
    UEnemyControlStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerExit();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StateData(const FControlEnemyState& oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlState(EEnemyControlState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyCrashMontageEnded(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllingEnemyAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllingEnemy(bool IsControlling);
    
    UFUNCTION(BlueprintCallable)
    void JumpPressed(APlayerCharacter* InPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPlayerControlComponent* GetAiPlayerControlComponent();
    
};

