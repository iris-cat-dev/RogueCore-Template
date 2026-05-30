#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EAscensionAnimationState.h"
#include "EAscensionHallState.h"
#include "ECharacterCameraMode.h"
#include "KneelingPlayerData.h"
#include "PlayerTransformInterp.h"
#include "Templates/SubclassOf.h"
#include "AscensionHallActor.generated.h"

class APickaxePreviewActor;
class APlayerCharacter;
class UAnimMontage;
class USceneComponent;
class USkeletalMeshComponent;
class UWindowWidget;

UCLASS(Blueprintable)
class AAscensionHallActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MachineMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EAscensionHallState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AscendingCharacter, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> AscendingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_AscensionMontage_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_AscensionMontage_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_AscensionMontage_End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransformInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickaxeZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickaxeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterCameraMode SetCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KneelingChangesToThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_KneelingPlayers, meta=(AllowPrivateAccess=true))
    TArray<FKneelingPlayerData> KneelingPlayers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerInterpolations, meta=(AllowPrivateAccess=true))
    TArray<FPlayerTransformInterp> PlayerInterpolations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWindowWidget> RewardsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APickaxePreviewActor> AscensionPickaxeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PickaxeSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AscensionPickaxe, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APickaxePreviewActor> AscensionPickaxe;
    
public:
    AAscensionHallActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleKneelPlayer(APlayerCharacter* InPlayer, USceneComponent* InPlacement);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopKneeling(APlayerCharacter* InPlayer);
    
    UFUNCTION(BlueprintCallable)
    void StartAscension();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAscendingCharacter(APlayerCharacter* InCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_TurnOnKneelUsableForPlacement(USceneComponent* InSceneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_LeavingState(EAscensionHallState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_LeavingAnimState(EAscensionAnimationState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_EnteringState(EAscensionHallState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_EnteringAnimState(EAscensionAnimationState InState);
    
private:
    UFUNCTION(BlueprintCallable)
    void PressingMovementInputKeyChanged(APlayerCharacter* InPlayer, bool HasInput);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(const EAscensionHallState& InPrevState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerInterpolations(const TArray<FPlayerTransformInterp>& LastInterps);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_KneelingPlayers(const TArray<FKneelingPlayerData>& PrevKneelingPlayers);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AscensionPickaxe();
    
protected:
    UFUNCTION()
    void OnRep_AscendingCharacter(const TWeakObjectPtr<APlayerCharacter>& prevCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void JumpPressed(APlayerCharacter* InPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAscensionInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAscensionHallState GetState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetCharacterPlacementComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetAscendingCharacter() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndAscension();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeState(EAscensionHallState InNewState);
    
};

