#include "LevelGenerationDebris.h"

ULevelGenerationDebris::ULevelGenerationDebris(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Debris = nullptr;
    this->Influencer = nullptr;
    this->Range = 1000.00f;
    this->SelfActivate = false;
}


