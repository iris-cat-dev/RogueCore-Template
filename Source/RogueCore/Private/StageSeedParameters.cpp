#include "StageSeedParameters.h"

FStageSeedParameters::FStageSeedParameters() {
    this->RunSeed = 0;
    this->RunDepth = ERunDepth::None;
    this->RunTemplate = nullptr;
    this->RunBiome = nullptr;
    this->RunDNA = nullptr;
    this->RunMutator = nullptr;
    this->ActiveStage = 0;
}

