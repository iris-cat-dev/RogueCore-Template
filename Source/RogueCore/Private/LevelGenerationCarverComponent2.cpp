#include "LevelGenerationCarverComponent2.h"

ULevelGenerationCarverComponent2::ULevelGenerationCarverComponent2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Carver = nullptr;
    this->CarvingDisabled = false;
    this->PreviewSeed = 0;
    this->SelfActivate = false;
    this->PreviewComponent = nullptr;
}


