#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "EGymAnimationState.h"
#include "EGymGamemode.h"
#include "OnCanStrikeDelegateDelegate.h"
#include "OnForceSetRepsDelegateDelegate.h"
#include "OnIFrameDelegateDelegate.h"
#include "OnLivesChangedDelegateDelegate.h"
#include "OnNewPBDelegateDelegate.h"
#include "OnRepTimerChangedDelegateDelegate.h"
#include "OnStrikeDelegateDelegate.h"
#include "ThresholdChangedDelegateDelegate.h"
#include "ValueChangedDelegateDelegate.h"
#include "FitnessGymStateComponent.generated.h"

class ABaseFitnessActivity;
class APlayerCharacter;
class UAnimSequence;
class UBaseGymMinigame;
class USoundControlBus;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UFitnessGymStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLivesChangedDelegate OnLivesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStrikeDelegate OnStrike;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIFrameDelegate OnIFrame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewPBDelegate OnNewPB;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnForceSetRepsDelegate OnForceSetReps;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCanStrikeDelegate OnCanStrikeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueChangedDelegate OnValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepTimerChangedDelegate OnRepTimerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThresholdChangedDelegate OnThresholdChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GymActivity, meta=(AllowPrivateAccess=true))
    ABaseFitnessActivity* GymActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CurrentExerciseIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EGymGamemode GymMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBaseGymMinigame* CurrentGymMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AnimState, meta=(AllowPrivateAccess=true))
    EGymAnimationState CurrentAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StressLevel, meta=(AllowPrivateAccess=true))
    float StressLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AnimationProgress, meta=(AllowPrivateAccess=true))
    float AnimationProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GymPlayRate, meta=(AllowPrivateAccess=true))
    float GymPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool AnimationProgressInstant;
    
public:
    UFitnessGymStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void TamperWithEquipment();
    
    UFUNCTION(BlueprintCallable)
    void StartActivity(ABaseFitnessActivity* Activity);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetIFrame(const bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGymIcon(UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetComplete();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_VisiblityChanged(bool visible);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateGymProgressLevel(float PlayTimePosition, bool Manual, bool Instant);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TeleportPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SendStressLevels(float Stress);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SendSoundQue(USoundControlBus* Bus, float Value, float FadeTime);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SendGymPlayRate(float PlayRate);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ForceEndActivity();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_EndActivity();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeAnimState(EGymAnimationState NewState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendScore(int32 Score);
    
    UFUNCTION(BlueprintCallable)
    void SendPersonalBest(int32 Score);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RepComplete(int32 RepCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PassOut(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StressLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GymPlayRate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GymActivity();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AnimState(EGymAnimationState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AnimationProgress();
    
public:
    UFUNCTION(BlueprintCallable)
    void IncreaseSpeedWithInterval();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseSpeed(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseDifficultyWithInterval();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseDifficulty(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPersonalBest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetAnimSequence(EGymAnimationState State);
    
    UFUNCTION(BlueprintCallable)
    void ForceEndActivity(APlayerCharacter* Player);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AnimNotifyCheck(FName NotifyName);
    
};

