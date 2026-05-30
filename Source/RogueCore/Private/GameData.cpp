#include "GameData.h"
#include "Templates/SubclassOf.h"

UGameData::UGameData() {
    this->HUDVisibilitySettings = nullptr;
    this->AscensionRewardsSettings = nullptr;
    this->KPI_Settings = nullptr;
    this->PerkSettings = nullptr;
    this->AbilitySettings = nullptr;
    this->FsdEventsSettings = nullptr;
    this->GameActivitySettings = nullptr;
    this->DanceSettings = nullptr;
    this->AnimationSettings = nullptr;
    this->EnemySettings = nullptr;
    this->DamageSettings = nullptr;
    this->ZoneSettings = nullptr;
    this->TreasureSettings = nullptr;
    this->DrinkSettings = nullptr;
    this->UpgradeSettings = nullptr;
    this->SpawnSettings = nullptr;
    this->VanitySettings = nullptr;
    this->KeyBindingSettings = nullptr;
    this->BXESettings = nullptr;
    this->EncounterSettings = nullptr;
    this->ForgingSettings = nullptr;
    this->SchematicSettings = nullptr;
    this->SkinSettings = nullptr;
    this->SpecialEventSettings = nullptr;
    this->ProceduralSettings = nullptr;
    this->PickaxeSettings = nullptr;
    this->TagSettings = nullptr;
    this->ItemSettings = nullptr;
    this->DynamicIconSettings = nullptr;
    this->ShowroomSettings = nullptr;
    this->VictoryPoseSettings = nullptr;
    this->TutorialSettings = nullptr;
    this->LegacySettings = nullptr;
    this->EffectSettings = nullptr;
    this->AfflictionSettings = nullptr;
    this->DailyDealSettings = nullptr;
    this->TerrainMaterialSettings = nullptr;
    this->SaveGameSettings = nullptr;
    this->DamageNumberSettings = nullptr;
    this->IntelSettings = nullptr;
    this->MinersManual = nullptr;
    this->StatusEffects = nullptr;
    this->CharacterSettings = nullptr;
    this->AchievementSettings = nullptr;
    this->StageSettings = nullptr;
    this->SeasonSettings = nullptr;
    this->InstancedNiagaraSettings = nullptr;
    this->RewardTreeSettings = nullptr;
    this->DefaultCharacterID = nullptr;
    this->CosmeticSheet1 = nullptr;
    this->EntitlementSettings = nullptr;
    this->CommunicationSettingsAsset = nullptr;
}

bool UGameData::IsCheatConsolesEnabled() const {
    return false;
}

FGVisibilityGroups UGameData::GetVisibilityGroups() const {
    return FGVisibilityGroups{};
}

FGDTasks UGameData::GetTaskData() const {
    return FGDTasks{};
}

FText UGameData::GetPlayerRankName(int32 Rank) const {
    return FText::GetEmpty();
}

TArray<UPlayerCharacterID*> UGameData::GetPlayerCharacterIds() const {
    return TArray<UPlayerCharacterID*>();
}

UPlayerCharacterID* UGameData::GetPlayerCharacterID(const FGuid& ID) const {
    return NULL;
}

FPerkSettings UGameData::GetPerkData() const {
    return FPerkSettings{};
}

UPerkAsset* UGameData::GetPerk(const EPerkName InPerkName) const {
    return NULL;
}

FGDMissionStats UGameData::GetMissionStats() const {
    return FGDMissionStats{};
}

int32 UGameData::GetMaxNumberOfDeployments() const {
    return 0;
}

UInventoryList* UGameData::GetInventoryList() const {
    return NULL;
}

UDifficultySetting* UGameData::GetDifficultySetting(int32 Index) const {
    return NULL;
}

int32 UGameData::GetDifficultyIndex(UDifficultySetting* NewDifficulty) const {
    return 0;
}

FDeploymentSlotRequirement UGameData::GetDeploymentSlotCost(int32 InSlotIndex) const {
    return FDeploymentSlotRequirement{};
}

UPlayerCharacterID* UGameData::GetDefaultCharacterID() const {
    return NULL;
}

TSubclassOf<APlayerCharacter> UGameData::GetDefaultCharacter() const {
    return NULL;
}

bool UGameData::GetDefaultBioBoosterDecks(const UPlayerCharacterID* InCharacter, TArray<UBioBoosterDeck*>& OutDecks) const {
    return false;
}

int32 UGameData::GetAscensionMeritCost(const int32 TimesAscended) const {
    return 0;
}

TArray<UHUDVisibilityGroup*> UGameData::GetAllVisibilityGroups(bool InSorted) const {
    return TArray<UHUDVisibilityGroup*>();
}

TArray<UOpsComTaskAsset*> UGameData::GetAllTasks() const {
    return TArray<UOpsComTaskAsset*>();
}

TArray<UMissionStat*> UGameData::GetAllMissionStats() const {
    return TArray<UMissionStat*>();
}

TArray<UMissionStat*> UGameData::GetAllInfirmaryStats() const {
    return TArray<UMissionStat*>();
}


