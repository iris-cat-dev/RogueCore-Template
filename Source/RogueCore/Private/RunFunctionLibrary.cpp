#include "RunFunctionLibrary.h"
#include "Templates/SubclassOf.h"

URunFunctionLibrary::URunFunctionLibrary() {
}

void URunFunctionLibrary::ResetWeeklyRunRewardsConditional(UObject* WorldContext, const URunTemplate* WeeklyRun, const int32 WeeklyRunSeed) {
}

bool URunFunctionLibrary::IsBiomeLocked(const UObject* WorldContext, const UBiome* BiomeToCheck) {
    return false;
}

bool URunFunctionLibrary::HavePlayerUnlockedRunTemplate(const UObject* WorldContext, const URunTemplate* RunTemplate) {
    return false;
}

bool URunFunctionLibrary::HavePlayerUnlockedRun(const UObject* WorldContext, const FGeneratedRunForBiome& GeneratedRun) {
    return false;
}

bool URunFunctionLibrary::HavePlayerUnlockedMutatedRuns(const UObject* WorldContext) {
    return false;
}

bool URunFunctionLibrary::HavePlayerUnlockedDuration(const UObject* WorldContext, const UStageDuration* duration) {
    return false;
}

bool URunFunctionLibrary::HavePlayerUnlockedDepth(const UObject* WorldContext, const ERunDepth Depth) {
    return false;
}

bool URunFunctionLibrary::HavePlayerUnlockedComplexity(const UObject* WorldContext, const UStageComplexity* Complexity) {
    return false;
}

bool URunFunctionLibrary::HaveGrantedRewardForCompletingStage(const UObject* WorldContext, const URunTemplate* RunTemplate, const ERunDepth RunDepth, const int32 StageIndex) {
    return false;
}

TArray<UReward*> URunFunctionLibrary::GrantRewardsForCompletingStage(UObject* WorldContext, const URunTemplate* RunTemplate, const ERunDepth RunDepth, const int32 StageIndex) {
    return TArray<UReward*>();
}

FString URunFunctionLibrary::GetStageTemplateOverrideAssetName(const TSoftObjectPtr<UStageTemplateOverride>& Override) {
    return TEXT("");
}

int32 URunFunctionLibrary::GetRunDepthIndex(const ERunDepth RunDepth) {
    return 0;
}

FString URunFunctionLibrary::GetRiskVectorAssetName(const TSoftObjectPtr<URiskVector>& RiskVector) {
    return TEXT("");
}

TArray<UReward*> URunFunctionLibrary::GetRewardsForCompletingStage(const URunTemplate* RunTemplate, const ERunDepth RunDepth, const int32 StageIndex) {
    return TArray<UReward*>();
}

FString URunFunctionLibrary::GetPrimaryMutatorAssetName(const TSoftObjectPtr<UPrimaryMutator>& Mutator) {
    return TEXT("");
}

FString URunFunctionLibrary::GetMutatorAssetName(const TSoftObjectPtr<UMutator>& Mutator) {
    return TEXT("");
}

UReward* URunFunctionLibrary::GetFirstRewardForCompletingStage(const URunTemplate* RunTemplate, const ERunDepth RunDepth, const int32 StageIndex) {
    return NULL;
}

UMissionDNA* URunFunctionLibrary::GetDnaClassDefaultObject(const TSubclassOf<UMissionDNA> DnaClass) {
    return NULL;
}

FString URunFunctionLibrary::GetDnaAssetName(const TSoftClassPtr<UMissionDNA>& DNA) {
    return TEXT("");
}

void URunFunctionLibrary::GetBiomeStatus(const UObject* WorldContext, const UBiome* Biome, bool& IsLocked, bool& IsOutOfRange, int32 Seed) {
}

EPlanetBiomeState URunFunctionLibrary::GetBiomeState(const UObject* WorldContext, const UBiome* Biome, const int32 MapSeed) {
    return EPlanetBiomeState::Available;
}

int32 URunFunctionLibrary::GetAmountOfRunsInBiome(const UObject* WorldContext, const UBiome* Biome, const ERunDepth Depth, const int32 MapSeed) {
    return 0;
}

int32 URunFunctionLibrary::GetAmountOfMutatedRunsInBiome(const UObject* WorldContext, const UBiome* Biome, const ERunDepth Depth, const int32 MapSeed) {
    return 0;
}

TArray<URunTemplate*> URunFunctionLibrary::GetAllRunTemplates() {
    return TArray<URunTemplate*>();
}

TArray<ERunDepth> URunFunctionLibrary::GetAllRunDepths() {
    return TArray<ERunDepth>();
}

TArray<UPrimaryMutator*> URunFunctionLibrary::GetAllMutators() {
    return TArray<UPrimaryMutator*>();
}

TArray<TSubclassOf<UMissionDNA>> URunFunctionLibrary::GetAllDNA() {
    return TArray<TSubclassOf<UMissionDNA>>();
}

TArray<UBiome*> URunFunctionLibrary::GetAllBiomes() {
    return TArray<UBiome*>();
}

int32 URunFunctionLibrary::GetActiveStageIndex(const UObject* WorldContext) {
    return 0;
}

ERunType URunFunctionLibrary::GetActiveRunType(const UObject* WorldContext) {
    return ERunType::Default;
}

float URunFunctionLibrary::GetActiveHazardBonus(const UObject* WorldContext) {
    return 0.0f;
}

FText URunFunctionLibrary::GenerateRunName(const int32 RunSeed) {
    return FText::GetEmpty();
}

UPlanetZone* URunFunctionLibrary::FindPlanetZone(const UBiome* Biome) {
    return NULL;
}

FString URunFunctionLibrary::ConvertRunIdToString(const FGuid RunId) {
    return TEXT("");
}

TArray<FRunBranchSet> URunFunctionLibrary::ComputeBranchSetsFromTemplate(const URunTemplate* RunTemplate, const ERunDepth Depth) {
    return TArray<FRunBranchSet>();
}

TArray<FRunBranchSet> URunFunctionLibrary::ComputeBranchSetsFromRun(const URun* Run) {
    return TArray<FRunBranchSet>();
}


