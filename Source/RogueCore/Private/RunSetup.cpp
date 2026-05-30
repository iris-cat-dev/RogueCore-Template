#include "RunSetup.h"

FRunSetup::FRunSetup() {
    this->RunSeed = 0;
    this->RunDepth = ERunDepth::None;
    this->RunTemplate = nullptr;
    this->RunDNA = nullptr;
    this->RunBiome = nullptr;
    this->RunMutator = nullptr;
    this->PlanetZone = nullptr;
    this->BossStageOverride = nullptr;
    this->RunId = FGuid();
}

