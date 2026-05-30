#include "RoomBurnerInGame.h"

ARoomBurnerInGame::ARoomBurnerInGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LiveUpdateEditor = false;
    this->RoomGenerator = nullptr;
    this->RoomRadius = 2500.00f;
    this->ShowRoomCollider = false;
    this->RunDepth = ERunDepth::Depth1;
    this->RunTemplate = nullptr;
    this->ActiveStage = -1;
    this->Seed = -1;
    this->Biome = nullptr;
    this->PlanetZone = nullptr;
    this->DifficultyOverride = nullptr;
    this->Difficulty = nullptr;
    this->ForcePlayerCount = -1;
    this->GenerateDebris = true;
    this->GenerateItems = true;
    this->GenerateResources = true;
    this->SpawnEncounters = true;
    this->CSGWorld = nullptr;
    this->PLSLiveEditor = nullptr;
    this->CaveGeneratorPLSOverride = nullptr;
    this->LiveEditRoomGenerator = nullptr;
}

URoomGenerator* ARoomBurnerInGame::GetRoomGenerator() const {
    return NULL;
}


