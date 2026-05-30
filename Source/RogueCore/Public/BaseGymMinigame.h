#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EFSDInputSource.h"
#include "EGymActions.h"
#include "EGymGamemode.h"
#include "GymInputData.h"
#include "OnHealthChangedDelegateDelegate.h"
#include "OnPointAddedDelegateDelegate.h"
#include "BaseGymMinigame.generated.h"

class UFitnessGymStateComponent;
class UGymActivityProperties;
class UInputComponent;
class UMinigameLifeWidget;
class UMinigameScoreWidget;
class USoundControlBus;
class UTexture2D;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBaseGymMinigame : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthChangedDelegate OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPointAddedDelegate OnPointAdded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMinigameLifeWidget*> LifeWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMinigameScoreWidget*> ScoreWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGymInputData> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGymInputData> ControllerInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGymInputData> AxisInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SingleMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGymActivityProperties* Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* FitnessInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFitnessGymStateComponent* GymComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EGymGamemode GymMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMultipleCameraAngles;
    
public:
    UBaseGymMinigame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SoundQueDelegatePushed(USoundControlBus* Bus, float Value, float FadeTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInputSourceChanged(const EFSDInputSource NewInputSource);
    
public:
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetInputTexture(EGymActions Action);
    
    UFUNCTION(BlueprintCallable)
    FName GetInputKey(EGymActions Action, int32& outAxis);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeInputAction();
    
};

