#include "RunCreationParameters.h"

FRunCreationParameters::FRunCreationParameters() {
    this->RunDepth = ERunDepth::None;
    this->RunTemplate = nullptr;
    this->RunSeedOverride = 0;
    this->StageSeedOverride = 0;
    this->ActiveStageOverride = 0;
    this->BiomeOverride = nullptr;
    this->PlanetZoneOverride = nullptr;
    this->DifficultyOverride = nullptr;
    this->BossOverride = nullptr;
    this->DnaOverride = nullptr;
    this->MutatorOverrides = FRunMutatorOverrides();
    this->ObjectiveOverrides = FRunObjectiveOverrides();
    this->CaveGeneratorOverride = nullptr;
    this->DebrisActorOverride = nullptr;
}

