#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EStageType.h"
#include "GMMutatorItem.h"
#include "ObjectiveMissionIcon.h"
#include "StageSetup.h"
#include "Templates/SubclassOf.h"
#include "Stage.generated.h"

class AFSDPlayerController;
class AProceduralSetup;
class UBiome;
class UMissionDNA;
class UMutator;
class UObjective;
class UPrimaryMutator;
class URiskVector;
class UStage;
class UStageTemplate;

UCLASS(Blueprintable, DefaultToInstanced)
class ROGUECORE_API UStage : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStageDelegate);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageDelegate OnStageSetupChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RunSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FStageSetup StageSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMutator>, FGMMutatorItem> Mutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URiskVector*> RiskVectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StageCompletionRequirement;
    
public:
    UStage();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked(const AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeepDive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStageTemplate* GetTemplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStageSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStageScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStageName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStageIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMissionDNA* GetStageDNA() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UObjective>> GetSecondaryObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMutator*> GetSecondaryMutators() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSafeRoomLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRunSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URiskVector*> GetRiskVectorsSorted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URiskVector*> GetRiskVectors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UObjective> GetPrimaryObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimaryMutator* GetPrimaryMutator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetNextStageIndexes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMutator*> GetMutators(TSubclassOf<UMutator> mutatorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UObjective>> GetExpeniteObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FObjectiveMissionIcon GetExpeniteObjectiveIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMissionDNA> GetDNA() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AProceduralSetup> GetCaveGenerator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBiome* GetBiome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AProceduralSetup* CreateCaveGenerator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreStagesEqual(const UStage* Other) const;
    
};

