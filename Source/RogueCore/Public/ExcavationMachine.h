#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ExcavationReward.h"
#include "PredictedRewards.h"
#include "RewardsUpdatedDelegate.h"
#include "ExcavationMachine.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AExcavationMachine : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* GemSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootScene;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExcavationReward> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExcavationReward ExpeniteChunkReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChanceExpenite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostSpawnChanceExpenite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChanceMultiplierExpenite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResourceAmountExpenite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExcavationReward WorthlessChunkReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Seed, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemainingGemCount, meta=(AllowPrivateAccess=true))
    int32 RemainingGemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PredictedRewards, meta=(AllowPrivateAccess=true))
    FPredictedRewards PredictedRewards;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRewardsUpdated OnRewardsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VisualsEnabled, meta=(AllowPrivateAccess=true))
    bool VisualsEnabled;
    
public:
    AExcavationMachine(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFutureRewards(int32 InDepth);
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnExcavationReward();
    
    UFUNCTION(BlueprintCallable)
    void SetVisualsEnabled(bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRemainingGemCount(int32 InGemAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetExpenitePayout(float InPayout);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ExcavationRewardFirstPickUp();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepVisualsEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepGemAmount();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VisualsEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Seed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainingGemCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PredictedRewards();
    
    UFUNCTION(BlueprintCallable)
    void LastRewardDispensed_AttachmentChanged(bool Attached, FVector PrevScale);
    
};

