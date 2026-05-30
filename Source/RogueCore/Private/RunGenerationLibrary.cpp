#include "RunGenerationLibrary.h"

URunGenerationLibrary::URunGenerationLibrary() {
}

FRunCreationParameters URunGenerationLibrary::CreateRunParametersFromSeed(const FStageSeedParameters& SeedParameters) {
    return FRunCreationParameters{};
}

FGeneratedRunProperties URunGenerationLibrary::ComputeRunProperties(const FRunCreationParameters& Parameters) {
    return FGeneratedRunProperties{};
}


