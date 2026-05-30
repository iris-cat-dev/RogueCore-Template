#include "Run.h"

URun::URun() {
}

bool URun::IsStageOfType(const int32 StageIndex, const EStageType StageType) const {
    return false;
}

bool URun::IsStageComplete(int32 branchIdx) const {
    return false;
}

bool URun::IsSecondToLastStage(int32 StageIndex) const {
    return false;
}

bool URun::IsLastStage(int32 StageIndex) const {
    return false;
}

bool URun::HaveStageAtIndex(const int32 StageIndex) const {
    return false;
}

URunTemplate* URun::GetTemplate() const {
    return NULL;
}

UStage* URun::GetStageAtIndex(const int32 StageIndex) const {
    return NULL;
}

ERunType URun::GetRunType() const {
    return ERunType::Default;
}

int32 URun::GetRunSeed() const {
    return 0;
}

FText URun::GetRunName() const {
    return FText::GetEmpty();
}

UPrimaryMutator* URun::GetRunMutator() const {
    return NULL;
}

UMissionDNA* URun::GetRunDNA() const {
    return NULL;
}

UBiome* URun::GetRunBiome() const {
    return NULL;
}

UPlanetZone* URun::GetPlanetZone() const {
    return NULL;
}

TArray<FRunPickedRiskVector> URun::GetPickedRiskVectors() const {
    return TArray<FRunPickedRiskVector>();
}

int32 URun::GetNumberOfStages() const {
    return 0;
}

int32 URun::GetNumberOfCompletedStages() const {
    return 0;
}

TArray<int32> URun::GetNextStageIndexes(int32 StageIndex) const {
    return TArray<int32>();
}

FObjectiveMissionIcon URun::GetIconWithBlood() const {
    return FObjectiveMissionIcon{};
}

FObjectiveMissionIcon URun::GetIcon() const {
    return FObjectiveMissionIcon{};
}

float URun::GetHazardBonus() const {
    return 0.0f;
}

ERunDepth URun::GetDepth() const {
    return ERunDepth::None;
}

TArray<int32> URun::GetCompletedStageIndexes() const {
    return TArray<int32>();
}

int32 URun::GetAmountOfStages() const {
    return 0;
}

int32 URun::GetAmountOfComplexity() const {
    return 0;
}

TArray<UStage*> URun::GetAllStages() const {
    return TArray<UStage*>();
}

UStage* URun::GetActiveStage() const {
    return NULL;
}

UPrimaryMutator* URun::GetActivePrimaryMutator() const {
    return NULL;
}

UDifficultySetting* URun::GetActiveDifficulty() const {
    return NULL;
}

FRunPickedRiskVector URun::FindPickedRiskVectorForStage(const int32 StageIndex) const {
    return FRunPickedRiskVector{};
}


