#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AnimationWeight.h"
#include "ArmAnimation.h"
#include "EBartenderAnim.h"
#include "OnBeerOrderedChangedDelegate.h"
#include "OnExerciseCompleteDelegate.h"
#include "OnExerciseCompletionMarkDelegate.h"
#include "OnNewGymGoalDelegateDelegate.h"
#include "OnNewOrderAcceptedDelegate.h"
#include "OnNewSpecialOrderSignatureDelegate.h"
#include "OnQuestAcceptedDelegate.h"
#include "OnSetCompleteDelegate.h"
#include "OmegaBartender.generated.h"

class ADrinkableActor;
class APlayerCharacter;
class UAnimMontage;
class UDrinkableDataAsset;
class UResourceData;
class USceneComponent;

UCLASS(Blueprintable)
class AOmegaBartender : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewSpecialOrderSignature OnNewSpecialOrder;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestAccepted OnQuestAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewOrderAccepted OnOrderAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExerciseCompletionMark OnExerciseCompletionMark;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetComplete OnSetComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExerciseComplete OnExerciseComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewGymGoalDelegate OnNewGymGoal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeerOrderedChanged OnBeerOrderedChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GymCurrencyAmount, meta=(AllowPrivateAccess=true))
    TArray<int32> GymCurrencyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GymCurrencyData, meta=(AllowPrivateAccess=true))
    TArray<UResourceData*> GymCurrencyData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MugSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DetachNotifyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Mugs, meta=(AllowPrivateAccess=true))
    TArray<ADrinkableActor*> Mugs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<bool> EmptySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* CurrentOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* SpecialOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentIdleMontageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentPourMontageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DrinkAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BartenderAnimationState, meta=(AllowPrivateAccess=true))
    EBartenderAnim BartenderAnimationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationWeight> OmegaIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArmAnimation> OmegaIdleArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationWeight> OmegaPourArm1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationWeight> OmegaPourArm2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationWeight> OmegaPourArm3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationWeight> OmegaPourArm4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OmegaSalute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SaluteLoseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SaluteCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SalutesToMakeOmegaSalute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CaloriesPerToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BeerOrdered, meta=(AllowPrivateAccess=true))
    bool QuestAccepted;
    
public:
    AOmegaBartender(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void ValidCheckPlayersInside();
    
public:
    UFUNCTION(BlueprintCallable)
    void TryAndOrder(bool CanTriggerEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartQuest(UDrinkableDataAsset* QuestDrink);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartOrder(UDrinkableDataAsset* Order);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnMugInHand(int32 Index, USceneComponent* Parent);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialOrder(UDrinkableDataAsset* Order);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNextOrder(UDrinkableDataAsset* Drink, bool IgnoreCheck, bool OnlySet);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMug(ADrinkableActor* Mug, int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayerSaluted();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_MugTaken(ADrinkableActor* Mug);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemovePlayerInside(APlayerCharacter* Player);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_QuestCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_QuestAccpeted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOmegaSaluteMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOmegaPourMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOmegaIdleMontage(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFillAnimation(int32 Index, UAnimMontage* Montage);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaceOrder();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PickNewIdle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Mugs();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_GymCurrencyData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GymCurrencyAmount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BeerOrdered();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BartenderAnimationState();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDetachMug(FName NotifyName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void MugTaken(ADrinkableActor* Mug);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestAccepted() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasCollectiveResource(UResourceData* ResourceData);
    
    UFUNCTION(BlueprintCallable)
    float GetPlayerCostMultiplier() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetIdleMontage(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetIdleArmMontage(int32 MontageIndex, int32 ArmIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetEmptySlots();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetCaloriesPerToken();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DetachMug(int32 Index, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBartenderAnimState(EBartenderAnim State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CannotAfford();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelQuest();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_MugFilled(int32 Index);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_ChangeMugSlot(int32 Index, bool Empty);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddPlayerInside(APlayerCharacter* Player);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateButton();
    
    UFUNCTION(BlueprintCallable)
    void AcceptQuest(UDrinkableDataAsset* QuestDrink);
    
};

