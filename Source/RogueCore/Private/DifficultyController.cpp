#include "DifficultyController.h"
#include "Net/UnrealNetwork.h"

UDifficultyController::UDifficultyController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DifficultyManager = nullptr;
    this->StageDifficultyProgression = nullptr;
    this->SoonNewDifficultyTime = 20.00f;
    this->EnemyCountModifierUsed = false;
    this->CurrentDifficulty = 0;
    this->NextDifficultyTime = 0.00f;
    this->SoonNextDifficultyTime = 0.00f;
    this->WarningTimeBeforeNextDifficulty = 20.00f;
}

void UDifficultyController::TriggerNewDifficulty_Server(const FBXEDifficultyPoint& Difficulty) {
}

void UDifficultyController::ToggleStageProgressionWarnings(bool suggestExtraction) {
}

void UDifficultyController::Server_IncrementDifficulty_Implementation() {
}

void UDifficultyController::ResetForNewLevel() {
}

void UDifficultyController::OnRep_CachedFutureWaves() {
}

float UDifficultyController::GetTimeToNextDifficulty() const {
    return 0.0f;
}

UStageDifficultyProgression* UDifficultyController::GetStageDifficultyProgression() const {
    return NULL;
}

FBXEDifficultyPoint UDifficultyController::GetFutureWave(int32 Index) const {
    return FBXEDifficultyPoint{};
}

TArray<FBXEDifficultyPoint> UDifficultyController::GetAllFutureWaves() const {
    return TArray<FBXEDifficultyPoint>();
}

void UDifficultyController::CacheWavePredictions(float TimeToNextWave) {
}

void UDifficultyController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDifficultyController, CachedFutureWaves);
}


