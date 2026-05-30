#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ERunDepth.h"
#include "ERunType.h"
#include "EStageType.h"
#include "ObjectiveMissionIcon.h"
#include "RunPickedRiskVector.h"
#include "RunState.h"
#include "RunStatistics.h"
#include "Run.generated.h"

class UBiome;
class UDifficultySetting;
class UMissionDNA;
class UPlanetZone;
class UPrimaryMutator;
class URunTemplate;
class UStage;

UCLASS(Blueprintable, DefaultToInstanced)
class URun : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRunDelegate);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunDelegate OnRunStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunDelegate OnRunStatisticsChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRunState RunState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRunStatistics RunStatistics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText RunName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStage*> Stages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString StartTime;
    
public:
    URun();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStageOfType(const int32 StageIndex, const EStageType StageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStageComplete(int32 branchIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecondToLastStage(int32 StageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastStage(int32 StageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveStageAtIndex(const int32 StageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URunTemplate* GetTemplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStage* GetStageAtIndex(const int32 StageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERunType GetRunType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRunSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRunName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimaryMutator* GetRunMutator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMissionDNA* GetRunDNA() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBiome* GetRunBiome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlanetZone* GetPlanetZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRunPickedRiskVector> GetPickedRiskVectors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfStages() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfCompletedStages() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetNextStageIndexes(int32 StageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjectiveMissionIcon GetIconWithBlood() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjectiveMissionIcon GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHazardBonus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERunDepth GetDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetCompletedStageIndexes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfStages() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfComplexity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStage*> GetAllStages() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStage* GetActiveStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimaryMutator* GetActivePrimaryMutator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultySetting* GetActiveDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRunPickedRiskVector FindPickedRiskVectorForStage(const int32 StageIndex) const;
    
};

