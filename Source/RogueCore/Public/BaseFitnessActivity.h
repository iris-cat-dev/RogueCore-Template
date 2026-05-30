#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OnActivityEndedDelegateDelegate.h"
#include "OnActivityStartedDelegateDelegate.h"
#include "OnAnimationChangedDelegateDelegate.h"
#include "PersonalBestDelegateDelegate.h"
#include "BaseFitnessActivity.generated.h"

class AFitnessGym;
class APlayerCharacter;
class UArrowComponent;
class UPlayerCharacterID;
class USoundControlBus;
class USpringArmComponent;

UCLASS(Blueprintable)
class ABaseFitnessActivity : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivityStartedDelegate OnActivityStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivityEndedDelegate OnActivityEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPersonalBestDelegate OnPersonalBest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationChangedDelegate OnAnimationChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ActorPlacement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFitnessGym* OwnerGym;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPlayerCharacterID*, int32> HighScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentUser, meta=(AllowPrivateAccess=true))
    APlayerCharacter* CurrentUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraHorizontalLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraVerticalLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpringArmComponent*> CameraSpringArms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> CameraSpringArmsBaseTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentBestScore, meta=(AllowPrivateAccess=true))
    int32 CurrentBestScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentBestScoreName, meta=(AllowPrivateAccess=true))
    FString CurrentBestScoreName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GymID;
    
public:
    ABaseFitnessActivity(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateRepSet(int32 RepsPerSet, int32 SetGoal, bool ResetSet, int32 CurrentSet) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float TranslateToLocation(const float Start, const float Destination, float step, bool& OutAtLocation, float SpeedModifier);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartActivity(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SoundQuePushed(USoundControlBus* Bus, float Value, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonalBest(int32 Best);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningGym(AFitnessGym* gym);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RepCompleteEvent(int32 RepCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentUser();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentBestScoreName() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentBestScore() const;
    
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* GetUserCharacter();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFitnessGym* GetOwnerGym() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeVisibilityOfEquipment(bool Show);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivityStarted();
    
};

