#include "PlanetGuaranteedRun.h"

FPlanetGuaranteedRun::FPlanetGuaranteedRun() {
    this->RunDepth = ERunDepth::None;
    this->Run = nullptr;
    this->Biome = nullptr;
    this->PlanetZone = nullptr;
    this->duration = nullptr;
    this->Complexity = nullptr;
    this->DNA = nullptr;
    this->Mutator = nullptr;
    this->UseRandomMutator = false;
}

