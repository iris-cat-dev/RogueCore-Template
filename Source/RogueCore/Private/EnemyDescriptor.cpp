#include "EnemyDescriptor.h"
#include "Templates/SubclassOf.h"

UEnemyDescriptor::UEnemyDescriptor() {
    this->EnemyID = nullptr;
    this->VeteranScaling = nullptr;
    this->VeteranClass = nullptr;
    this->EnemySignificance = EEnemySignificance::Swarmer;
    this->UsesSpawnEffects = true;
    this->CreatureSize = ECreatureSize::Tiny;
    this->UsePositioningInGameplay = false;
    this->PositioningAsset = nullptr;
    this->CustomPositioning = nullptr;
    this->CaveInfluencer = nullptr;
    this->PlaceInGroupsOf = 1;
    this->PlaceInGroupRadius = 0.00f;
    this->InfluencerRange = 1000.00f;
    this->PlacementCarver = nullptr;
    this->PathfinderType = DeepPathFinderType::Walk;
    this->SpawnAtUprightLocation = false;
    this->SpawnSpread = 300.00f;
    this->IdealSpawnSize = 10;
    this->CanBeUsedForConstantPressure = false;
    this->CanBeUsedInEncounters = true;
    this->DifficultyRating = 10.00f;
    this->MinSpawnCount = 1;
    this->MaxSpawnCount = 9999;
    this->Rarity = 1.00f;
    this->SpawnAmountModifier = 1.00f;
    this->RequiredMainCampaignProgress = 0;
    this->UsesSpawnRarityModifiers = false;
    this->SpawnRarityModifiers.AddDefaulted(4);
    this->CheatClass = EEnemyDescriptorCheatClass::Basic;
    this->CheatTag = EEnemyDescriptorCheatTag::RC;
}

TSubclassOf<APawn> UEnemyDescriptor::GetEnemyClass(UBiome* Biome) const {
    return NULL;
}

TArray<UEnemyDescriptor*> UEnemyDescriptor::FindTagsForCheatMenu(EEnemyDescriptorCheatClass NewCheatTag) {
    return TArray<UEnemyDescriptor*>();
}

TArray<UEnemyDescriptor*> UEnemyDescriptor::FindEnemiesWithClassWithoutTagForCheatMenu(EEnemyDescriptorCheatClass NewCheatClass, EEnemyDescriptorCheatTag removeTag) {
    return TArray<UEnemyDescriptor*>();
}

TArray<UEnemyDescriptor*> UEnemyDescriptor::FindDescriptorsForCheatMenu(EEnemyDescriptorCheatClass NewCheatClass) {
    return TArray<UEnemyDescriptor*>();
}

TArray<UEnemyDescriptor*> UEnemyDescriptor::FindAllDescriptorsForCheatMenu() {
    return TArray<UEnemyDescriptor*>();
}


