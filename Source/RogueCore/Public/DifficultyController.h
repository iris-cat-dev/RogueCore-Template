#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "BXEDifficultyPoint.h"
#include "DelegateDelegate.h"
#include "WaveDifficultyController.h"
#include "DifficultyController.generated.h"

class UDifficultyManager;
class UStageDifficultyProgression;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDifficultyController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate WavePredictionCalculated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CachedFutureWaves, meta=(AllowPrivateAccess=true))
    TArray<FBXEDifficultyPoint> CachedFutureWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDifficultyManager* DifficultyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveDifficultyController NormalWaveController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageDifficultyProgression* StageDifficultyProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoonNewDifficultyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnemyCountModifierUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve EnemyCountModifierScaleOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextDifficultyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoonNextDifficultyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarningTimeBeforeNextDifficulty;
    
public:
    UDifficultyController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TriggerNewDifficulty_Server(const FBXEDifficultyPoint& Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void ToggleStageProgressionWarnings(bool suggestExtraction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_IncrementDifficulty();
    
    UFUNCTION(BlueprintCallable)
    void ResetForNewLevel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CachedFutureWaves();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeToNextDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStageDifficultyProgression* GetStageDifficultyProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBXEDifficultyPoint GetFutureWave(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBXEDifficultyPoint> GetAllFutureWaves() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CacheWavePredictions(float TimeToNextWave);
    
};

