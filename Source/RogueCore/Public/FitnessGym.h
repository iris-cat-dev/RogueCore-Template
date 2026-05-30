#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BarQuestData.h"
#include "EExerciseDifficulty.h"
#include "OnNewGoalDelegateDelegate.h"
#include "OnRepCompletedDelegateDelegate.h"
#include "OnRepNewHighscoreDelegateDelegate.h"
#include "OnSetCompletedDelegateDelegate.h"
#include "QuestObjective.h"
#include "FitnessGym.generated.h"

class ABaseFitnessActivity;
class AGymDisplay;
class AOmegaBartender;
class APlayerCharacter;
class UBarQuestObjective;
class UDrinkableDataAsset;
class UObject;
class UResourceData;
class UTexture2D;

UCLASS(Blueprintable)
class AFitnessGym : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepCompletedDelegate OnRepCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetCompletedDelegate OnSetCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepNewHighscoreDelegate OnNewHighscore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewGoalDelegate OnNewGoal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABaseFitnessActivity*> activities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGymDisplay*> GymMonitors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOmegaBartender* Bartender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FQuestObjective> QuestObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitalizedQuestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GymCreditPerSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> ActivePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentDrinkQuest, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* CurrentDrinkQuest;
    
public:
    AFitnessGym(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSets();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateRepsPerSet();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCalories();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, meta=(WorldContext="WorldContext"))
    void UnlockBeer(UObject* WorldContext, UDrinkableDataAsset* DrinkData);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopCharacterFromHoveringActivities(APlayerCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetQuest(UDrinkableDataAsset* DrinkQuest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNewDisplayNumbers();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMonitors(TArray<AGymDisplay*> monitors);
    
    UFUNCTION(BlueprintCallable)
    void SetBartender(AOmegaBartender* aBartender);
    
    UFUNCTION(BlueprintCallable)
    void SetActivities(TArray<ABaseFitnessActivity*> NewActivities);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveUntilCorrectSize(TArray<int32>& Array, int32 DesiredSize);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentDrinkQuest();
    
public:
    UFUNCTION(BlueprintCallable)
    void NewGoal(const int32 SetGoal, const int32 RepsPerSet);
    
protected:
    UFUNCTION(BlueprintCallable)
    EExerciseDifficulty GetWhichDifficultyToPickFrom(EExerciseDifficulty BaseDifficulty, FBarQuestData Data);
    
    UFUNCTION(BlueprintCallable)
    UBarQuestObjective* GetRandomObjectiveFromList(const TArray<UBarQuestObjective*>& List);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<AGymDisplay*> GetGymMonitors();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetDesiredQuestObjectiveNum();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAcitivityIcons(TArray<UTexture2D*>& outTextures, TArray<int32>& outIDs) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAcitivityAmount() const;
    
    UFUNCTION(BlueprintCallable)
    UBarQuestObjective* FetchRandomQuestObjective(const FBarQuestData& Quest, EExerciseDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void CreateExercisePlan();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckIfQuestComplete();
    
    UFUNCTION(BlueprintCallable)
    void Cheat_CompleteCurrentQuest();
    
    UFUNCTION(BlueprintCallable)
    bool CanPlayerStartActivity(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void AllowCharacterToHoverActivities(APlayerCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_UpdateQuestUI(UResourceData* Data, int32 NewSetsRemaining);
    
};

