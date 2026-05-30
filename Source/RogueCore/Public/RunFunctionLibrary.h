#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPlanetBiomeState.h"
#include "ERunDepth.h"
#include "ERunType.h"
#include "GeneratedRunForBiome.h"
#include "RunBranchSet.h"
#include "Templates/SubclassOf.h"
#include "RunFunctionLibrary.generated.h"

class UBiome;
class UMissionDNA;
class UMutator;
class UObject;
class UPlanetZone;
class UPrimaryMutator;
class UReward;
class URiskVector;
class URun;
class URunTemplate;
class UStageComplexity;
class UStageDuration;
class UStageTemplateOverride;

UCLASS(Blueprintable)
class ROGUECORE_API URunFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URunFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ResetWeeklyRunRewardsConditional(UObject* WorldContext, const URunTemplate* WeeklyRun, const int32 WeeklyRunSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsBiomeLocked(const UObject* WorldContext, const UBiome* BiomeToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool HavePlayerUnlockedRunTemplate(const UObject* WorldContext, const URunTemplate* RunTemplate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool HavePlayerUnlockedRun(const UObject* WorldContext, const FGeneratedRunForBiome& GeneratedRun);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool HavePlayerUnlockedMutatedRuns(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool HavePlayerUnlockedDuration(const UObject* WorldContext, const UStageDuration* duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool HavePlayerUnlockedDepth(const UObject* WorldContext, const ERunDepth Depth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool HavePlayerUnlockedComplexity(const UObject* WorldContext, const UStageComplexity* Complexity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool HaveGrantedRewardForCompletingStage(const UObject* WorldContext, const URunTemplate* RunTemplate, const ERunDepth RunDepth, const int32 StageIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<UReward*> GrantRewardsForCompletingStage(UObject* WorldContext, const URunTemplate* RunTemplate, const ERunDepth RunDepth, const int32 StageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStageTemplateOverrideAssetName(const TSoftObjectPtr<UStageTemplateOverride>& Override);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRunDepthIndex(const ERunDepth RunDepth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRiskVectorAssetName(const TSoftObjectPtr<URiskVector>& RiskVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UReward*> GetRewardsForCompletingStage(const URunTemplate* RunTemplate, const ERunDepth RunDepth, const int32 StageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPrimaryMutatorAssetName(const TSoftObjectPtr<UPrimaryMutator>& Mutator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMutatorAssetName(const TSoftObjectPtr<UMutator>& Mutator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UReward* GetFirstRewardForCompletingStage(const URunTemplate* RunTemplate, const ERunDepth RunDepth, const int32 StageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMissionDNA* GetDnaClassDefaultObject(const TSubclassOf<UMissionDNA> DnaClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDnaAssetName(const TSoftClassPtr<UMissionDNA>& DNA);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static void GetBiomeStatus(const UObject* WorldContext, const UBiome* Biome, bool& IsLocked, bool& IsOutOfRange, int32 Seed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static EPlanetBiomeState GetBiomeState(const UObject* WorldContext, const UBiome* Biome, const int32 MapSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetAmountOfRunsInBiome(const UObject* WorldContext, const UBiome* Biome, const ERunDepth Depth, const int32 MapSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetAmountOfMutatedRunsInBiome(const UObject* WorldContext, const UBiome* Biome, const ERunDepth Depth, const int32 MapSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<URunTemplate*> GetAllRunTemplates();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ERunDepth> GetAllRunDepths();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UPrimaryMutator*> GetAllMutators();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TSubclassOf<UMissionDNA>> GetAllDNA();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UBiome*> GetAllBiomes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetActiveStageIndex(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static ERunType GetActiveRunType(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float GetActiveHazardBonus(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static FText GenerateRunName(const int32 RunSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlanetZone* FindPlanetZone(const UBiome* Biome);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertRunIdToString(const FGuid RunId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRunBranchSet> ComputeBranchSetsFromTemplate(const URunTemplate* RunTemplate, const ERunDepth Depth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRunBranchSet> ComputeBranchSetsFromRun(const URun* Run);
    
};

