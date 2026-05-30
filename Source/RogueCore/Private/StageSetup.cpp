#include "StageSetup.h"

FStageSetup::FStageSetup() {
    this->StageSeed = 0;
    this->StageTemplate = nullptr;
    this->Biome = nullptr;
    this->Type = EStageType::Cave;
    this->Difficulty = nullptr;
    this->PrimaryObjective = nullptr;
    this->PrimaryMutator = nullptr;
    this->StageDna = nullptr;
    this->ProceduralActor = nullptr;
    this->DebrisActor = nullptr;
    this->SafeRoomLevel = FString();
}

