#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EIntelChallengeState.h"
#include "EIntelObjectiveState.h"
#include "IntelProgression.h"
#include "Templates/SubclassOf.h"
#include "IntelCampaignSubsystem.generated.h"

class UFSDGameInstance;
class UIntelChallenge;
class UIntelObjective;

UCLASS(Blueprintable)
class UIntelCampaignSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIntelSubsystemObjectiveDelegate, UIntelObjective*, Objective);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIntelSubsystemDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIntelSubsystemChallengeDelegate, TSubclassOf<UIntelChallenge>, Challenge);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntelSubsystemDelegate OnIntelPointsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntelSubsystemChallengeDelegate OnChallengeClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntelSubsystemObjectiveDelegate OnObjectiveClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntelSubsystemChallengeDelegate OnChallengeCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UIntelObjective*> AllObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UIntelObjective*> ActiveObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UIntelChallenge*> ActiveChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIntelProgression RecentProgression;
    
public:
    UIntelCampaignSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetIntelPoints(const int32 NewIntelPoints);
    
    UFUNCTION(BlueprintCallable)
    void ResetRecentIntelProgression();
    
    UFUNCTION(BlueprintCallable)
    void ResetIntelCampaign();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntelProgression GetRecentIntelProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIntelObjective*> GetObjectivesWithState(const EIntelObjectiveState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIntelObjective*> GetObjectivesThatCanBeClaimed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIntelObjectiveState GetObjectiveState(const UIntelObjective* Objective) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntelPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIntelChallenge>> GetChallengesThatCanBeClaimed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIntelChallengeState GetChallengeState(const TSubclassOf<UIntelChallenge> ChallengeClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChallengeIntelReward(const TSubclassOf<UIntelChallenge> ChallengeClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIntelObjective*> GetAllObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UIntelChallenge>> GetActiveChallenges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIntelChallenge* FindActiveChallengeOfClass(const TSubclassOf<UIntelChallenge> ChallengeClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText CreateChallengeDescription(const TSubclassOf<UIntelChallenge> ChallengeClass) const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteIntelCampaign();
    
    UFUNCTION(BlueprintCallable)
    void ClaimObjective(UIntelObjective* Objective);
    
    UFUNCTION(BlueprintCallable)
    void ClaimChallenge(const TSubclassOf<UIntelChallenge> ChallengeClass);
    
};

