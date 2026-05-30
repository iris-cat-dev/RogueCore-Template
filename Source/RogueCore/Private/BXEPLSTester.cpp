#include "BXEPLSTester.h"

ABXEPLSTester::ABXEPLSTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Seed = -1;
    this->SimulatePlayerCount = -1;
    this->RunDepth = ERunDepth::Depth1;
    this->RunTemplate = nullptr;
    this->ActiveStage = -1;
    this->Biome = nullptr;
    this->PlanetZoneOverride = nullptr;
    this->DifficultyOverride = nullptr;
    this->BossOverride = nullptr;
    this->DnaOverride = nullptr;
}


