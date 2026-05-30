#include "ProceduralTutorial.h"

AProceduralTutorial::AProceduralTutorial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RunSeedOverride = -1;
    this->StageSeedOverride = -1;
    this->RunTemplate = nullptr;
    this->RunDepth = ERunDepth::Depth1;
    this->ActiveStage = -1;
    this->Biome = nullptr;
    this->PlanetZoneOverride = nullptr;
    this->DnaOverride = nullptr;
    this->ProceduralOverride = nullptr;
    this->DifficultyOverride = nullptr;
    this->BossOverride = nullptr;
    this->OverrideDifficulty = nullptr;
    this->SpecialEvent = nullptr;
}


