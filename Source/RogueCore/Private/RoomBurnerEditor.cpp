#include "RoomBurnerEditor.h"

ARoomBurnerEditor::ARoomBurnerEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Seed = -1;
    this->RunDepth = ERunDepth::Depth1;
    this->RunTemplate = nullptr;
    this->ActiveStage = -1;
    this->Biome = nullptr;
    this->PlanetZone = nullptr;
    this->DnaOverride = nullptr;
    this->DifficultyOverride = nullptr;
    this->BossOverride = nullptr;
    this->LiveUpdateEditor = false;
    this->MirrorTest = ERoomMirror::None;
    this->OverridePLSCLass = nullptr;
    this->RoomGenerator = nullptr;
    this->RoomRadius = 2500.00f;
    this->MirrorSupport = ERoomMirroringSupport::MirrorAroundX;
    this->ShowRoomCollider = false;
    this->ShowLineCarvers = true;
    this->Difficulty = nullptr;
    this->ForcePlayerCount = -1;
    this->GenerateDebris = true;
    this->GenerateItems = true;
    this->GenerateResources = true;
    this->SpawnEncounters = true;
    this->TestEnemy = nullptr;
    this->TestEnemyCount = 0;
    this->TestSpecialEvent = nullptr;
    this->TestTreasure = nullptr;
    this->CSGWorld = nullptr;
    this->PLSLiveEditor = nullptr;
    this->LiveEditRoomGenerator = nullptr;
}

void ARoomBurnerEditor::SpawnEncounter(AProceduralSetup* setup) {
}

URoomGenerator* ARoomBurnerEditor::GetRoomGenerator() const {
    return NULL;
}


