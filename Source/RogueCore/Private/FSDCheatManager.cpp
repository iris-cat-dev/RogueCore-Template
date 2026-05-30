#include "FSDCheatManager.h"
#include "Templates/SubclassOf.h"

UFSDCheatManager::UFSDCheatManager() {
    this->bShowPawnHealth = false;
    this->RoomJumpCount = 0;
    this->PreviousMaxDistanceBeforeCleanup = 0.00f;
    this->EscortShowSmartRockDebug = false;
    this->IsUsingSavedCheats = false;
}

void UFSDCheatManager::SwitchCharacter(UPlayerCharacterID* characterID) {
}

void UFSDCheatManager::SpawnEnemies(UEnemyDescriptor* descriptor, int32 count) {
}

void UFSDCheatManager::SpawnCritters(UBaseCritterDescriptor* descriptor, int32 count) {
}

void UFSDCheatManager::SpawnBosco(TSoftClassPtr<APawn> DroneClass, TSubclassOf<AFSDAIController> aControllerClass) {
}

void UFSDCheatManager::ShowTutorialDebug() {
}

void UFSDCheatManager::ShowPawnHealth(bool InShow) {
}

void UFSDCheatManager::SetStandingDown(bool standingDown) {
}

void UFSDCheatManager::SetSpawnEnemies(bool NewSpawnEnemies) {
}

bool UFSDCheatManager::SetSavedCheatValue(const FName CheatName, const int32& ValueToSet) {
    return false;
}

void UFSDCheatManager::SetQuadPickAxe(bool Quad) {
}

void UFSDCheatManager::SetMarketingModeEnabled(const bool IsEnabled) {
}

void UFSDCheatManager::SetHUDVisible(bool ShowHUD) {
}

void UFSDCheatManager::SetGodMode(bool God) {
}

void UFSDCheatManager::SetFastMovement(bool fast) {
}

void UFSDCheatManager::SetActorTrackingCheat(AActor* Actor, bool shouldTrack) {
}

void UFSDCheatManager::Server_ResetCritChance_Implementation(APlayerCharacter* Character) {
}

void UFSDCheatManager::Server_Refresh_Daily_Special_Implementation(int32 Index) {
}

void UFSDCheatManager::Server_BXE_GymQuest_Complete_Implementation() {
}

void UFSDCheatManager::ResetSpacerigIntroMessage() {
}

void UFSDCheatManager::ResetIntelCampaign() const {
}

void UFSDCheatManager::R_RemoveResources(int32 Number) {
}

void UFSDCheatManager::R_RemoveCraftingResource(int32 Amount, int32 Type) {
}

void UFSDCheatManager::R_Chips_Set(int32 Amount) {
}

void UFSDCheatManager::R_Chips_Add(int32 Amount) {
}

void UFSDCheatManager::R_AddSeasonToken(int32 Number) {
}

void UFSDCheatManager::R_AddResources_Player(float Number) {
}

void UFSDCheatManager::R_AddResources(float Number) {
}

void UFSDCheatManager::R_AddMatrixCores(int32 Number) {
}

void UFSDCheatManager::R_AddHollomite(float Amount) {
}

void UFSDCheatManager::R_AddGymCredit(int32 Type, int32 Amount) const {
}

void UFSDCheatManager::R_AddGold(float Amount) {
}

void UFSDCheatManager::R_AddDystrum(float Amount) {
}

void UFSDCheatManager::R_AddCraftingResource(int32 Amount, int32 Type) const {
}

void UFSDCheatManager::R_AddCalories(int32 Number) {
}

void UFSDCheatManager::R_Add_Phazyonite(int32 Amount) {
}

void UFSDCheatManager::R_Add_BitterGem(int32 Amount) {
}

void UFSDCheatManager::R_Add_Aquarq(int32 Amount) {
}

bool UFSDCheatManager::IsSpawnEnemiesEnabled() const {
    return false;
}

bool UFSDCheatManager::IsMarketingModeEnabled() {
    return false;
}

bool UFSDCheatManager::IsInGodMode() {
    return false;
}

bool UFSDCheatManager::IsFlyModeActive() const {
    return false;
}

bool UFSDCheatManager::IsFlareGunProjectilesInfinite() {
    return false;
}

bool UFSDCheatManager::IsFastMovementActive() const {
    return false;
}

bool UFSDCheatManager::GetSavedCheatValue(const FName CheatName, int32& ValueToGet) {
    return false;
}

void UFSDCheatManager::GetListOfRoomNames(TArray<FString>& roomNames) {
}

UWidget* UFSDCheatManager::GetFocusedUMGWidget() {
    return NULL;
}

void UFSDCheatManager::Expansion_LevelUp() const {
}

void UFSDCheatManager::Expansion_AddXP_Player(int32 Amount) const {
}

void UFSDCheatManager::Expansion_AddXP(int32 Amount) const {
}

void UFSDCheatManager::DestroyAllInstances(TSubclassOf<AActor> destroy) {
}

void UFSDCheatManager::D_Rejoin_RestoreState() {
}

void UFSDCheatManager::D_MovieModeStartWithCameraShake(bool Value) {
}

void UFSDCheatManager::D_MovieModeStartAtOrigin(bool Value) {
}

void UFSDCheatManager::D_EnableMovieModeInSpacerig(bool Value) {
}

void UFSDCheatManager::D_EnableMovieMode(bool Value) {
}

void UFSDCheatManager::CopySeedForStage() {
}

void UFSDCheatManager::CompleteRandomIntelChallenges(const int32 AmountToComplete) const {
}

void UFSDCheatManager::CompleteIntelCampaign() const {
}

void UFSDCheatManager::ClaimIntelObjectives() const {
}

void UFSDCheatManager::ClaimIntelChallenges() const {
}

void UFSDCheatManager::Cheat_UnlockWeapon(UObject* WorldContextObjectm, UItemID* ItemID) {
}

void UFSDCheatManager::Cheat_UnlockAllWeapons(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_UnlockAllUpgrades(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_UnlockAll_Poses(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_UnlockAll_Beers(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Schematic_UnlockAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Schematic_ResetAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Schematic_GiveRandom(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Schematic_ForgeAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Resources(UObject* WorldContextObject, float Amount) {
}

void UFSDCheatManager::Cheat_ResetIntelCampaign(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_ResetEquippedUpgrades(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_RemoveResources(UObject* WorldContextObject, int32 Amount) {
}

void UFSDCheatManager::Cheat_PickAxeVanity_UnlockAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_PickAxeVanity_ResetAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_MinersManual_ShowAll(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_GenerateNewMissionSeed(UObject* WorldContextObject, bool Enabled) {
}

void UFSDCheatManager::Cheat_ForceTreasure(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_ForceLostPack(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_CompleteIntelCampaign(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Campaign_Complete(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_Campaign_Advance(UObject* WorldContextObject) {
}

void UFSDCheatManager::Cheat_AddXP(UObject* WorldContextObject, int32 Amount) {
}

void UFSDCheatManager::Cheat_AddSpawnPosMarker(AActor* Actor) {
}

void UFSDCheatManager::Cheat_AddScrip(UObject* WorldContextObject, int32 InAmount) {
}

void UFSDCheatManager::Cheat_AddMerit(UObject* WorldContextObject, int32 InAmount) {
}

void UFSDCheatManager::Cheat_AddIntel(UObject* WorldContextObject, const int32 newAmount) {
}

void UFSDCheatManager::C_Windows_PrintStack() const {
}

void UFSDCheatManager::C_Windows_CloseAll() const {
}

void UFSDCheatManager::C_VanityMasteryResetXP() {
}

void UFSDCheatManager::C_VanityMasteryAddXP(int32 Number) {
}

void UFSDCheatManager::C_UnlockOverclocking() {
}

void UFSDCheatManager::C_UnlockAll_WeaponUpgrades() {
}

void UFSDCheatManager::C_UnlockAll_WeaponSkins_Paintjobs() {
}

void UFSDCheatManager::C_UnlockAll_WeaponSkins_Frameworks() {
}

void UFSDCheatManager::C_UnlockAll_WeaponSkins() {
}

void UFSDCheatManager::C_UnlockAll_Weapons() {
}

void UFSDCheatManager::C_UnlockAll_StoreVanity() {
}

void UFSDCheatManager::C_UnlockAll_Poses_ForAll() {
}

void UFSDCheatManager::C_UnlockAll_Poses() {
}

void UFSDCheatManager::C_UnlockAll_PickaxeParts() {
}

void UFSDCheatManager::C_UnlockAll_Enhancements() {
}

void UFSDCheatManager::C_UnlockAll_Drinks() {
}

void UFSDCheatManager::C_UnlockAll_Beers() {
}

void UFSDCheatManager::C_UnlockAll_ArmorMats() {
}

void UFSDCheatManager::C_UnlockAll() {
}

void UFSDCheatManager::C_Tutorials_ResetHints() {
}

void UFSDCheatManager::C_TriggerFreeze(const float FreezeSeconds) const {
}

void UFSDCheatManager::C_TriggerEnsure() const {
}

void UFSDCheatManager::C_TriggerCrash() const {
}

void UFSDCheatManager::C_TriggerCheck() const {
}

void UFSDCheatManager::C_Treasures_Track(int32 Mode) {
}

void UFSDCheatManager::C_Treasures_Reward(int32 count) {
}

void UFSDCheatManager::C_ToggleWaveTimeDebugText() {
}

void UFSDCheatManager::C_ToggleHoopGameMovement() {
}

void UFSDCheatManager::C_ToggleFadingEnabled() {
}

void UFSDCheatManager::C_ToggleFadingDebug() {
}

void UFSDCheatManager::C_ToggleCanShowBlood() {
}

void UFSDCheatManager::C_TestNegotiationDistribution(int32 TestTimes) {
}

void UFSDCheatManager::C_TestGenerationDesync() {
}

void UFSDCheatManager::C_TeleportToPlayer(int32 InPlayerIndex) {
}

void UFSDCheatManager::C_TeleportPlayerToMe(int32 InPlayerIndex) {
}

void UFSDCheatManager::C_TeleportAllPlayersToMe() {
}

void UFSDCheatManager::C_StopMovement(bool shouldMove) {
}

void UFSDCheatManager::C_SpawnScriptedWaveIndex(int32 Index) {
}

void UFSDCheatManager::C_SpawnScriptedWave() {
}

void UFSDCheatManager::C_SpawnNormalWave() {
}

void UFSDCheatManager::C_SpawnLocalPlayerInMedbay() {
}

void UFSDCheatManager::C_SpawnEvenRewarder() {
}

void UFSDCheatManager::C_SpawnBXEDrone(TSoftClassPtr<APawn> DroneClass) {
}

void UFSDCheatManager::C_SpawnAllPlayersInMedbay() {
}

void UFSDCheatManager::C_SpawnAllParticles() {
}

void UFSDCheatManager::C_Shouts_SetVoicePitch(float InPitch) {
}

void UFSDCheatManager::C_SetUseSavedCheatsByDefault(bool useSavedCheats) {
}

void UFSDCheatManager::C_SetTestingCharacter(UPlayerCharacterID* characterID) {
}

void UFSDCheatManager::C_SetSavedCheats() {
}

void UFSDCheatManager::C_SetPlayers(int32 Number) {
}

void UFSDCheatManager::C_SetMarketingModeEnabled(const bool IsEnabled) {
}

void UFSDCheatManager::C_SetInWorldSubtitlesActive(bool Active) {
}

void UFSDCheatManager::C_SetInstantUsables(bool Value) {
}

void UFSDCheatManager::C_SetHostileReadingEnabled(bool Enabled) {
}

void UFSDCheatManager::C_SetHealth(float Health) {
}

void UFSDCheatManager::C_SetFlyMode(bool flyEnabled) {
}

void UFSDCheatManager::C_SetFastFlares() {
}

void UFSDCheatManager::C_SetEnglish(int32 Val) {
}

void UFSDCheatManager::C_SetDancing(bool shouldDance) {
}

void UFSDCheatManager::C_SetArmor(float Armor) {
}

void UFSDCheatManager::C_SetAmmoCostEnabled(bool Enabled) {
}

void UFSDCheatManager::C_Seasons_ResetXP() {
}

void UFSDCheatManager::C_Seasons_ResetToken() {
}

void UFSDCheatManager::C_Seasons_ResetReroll() {
}

void UFSDCheatManager::C_Seasons_ResetPlagueHeartsCollected() {
}

void UFSDCheatManager::C_Seasons_IncrementChallenge(int32 Index) {
}

void UFSDCheatManager::C_Seasons_CompleteScripChallenge(int32 Number) {
}

void UFSDCheatManager::C_Seasons_ClearChallenges() {
}

void UFSDCheatManager::C_Seasons_ClearAllProgress() {
}

void UFSDCheatManager::C_Seasons_AddXP(int32 Number) {
}

void UFSDCheatManager::C_Seasons_AddHeartsCollecdted(int32 Number) {
}

void UFSDCheatManager::C_Seasons_AddChallenge() {
}

void UFSDCheatManager::C_Schematics_UnlockAll() {
}

void UFSDCheatManager::C_Schematics_ResetAll() {
}

void UFSDCheatManager::C_Schematics_ForgeAll() {
}

void UFSDCheatManager::C_Schematics_ClearHasSeenFirstMessage() {
}

void UFSDCheatManager::C_Schematic_GiveRandom() {
}

void UFSDCheatManager::C_SaveVanitySetupToOpenEditor() {
}

void UFSDCheatManager::C_Salvage_FixMiniMules() {
}

void UFSDCheatManager::C_RevivePlayer() {
}

void UFSDCheatManager::C_Revive() {
}

void UFSDCheatManager::C_Resupply() {
}

void UFSDCheatManager::C_ResetForgingXP() {
}

void UFSDCheatManager::C_ResetEnhancementTree() {
}

void UFSDCheatManager::C_ResetCosmeticSheet() {
}

void UFSDCheatManager::C_ResetCheatedResources(int32 newAmount) {
}

void UFSDCheatManager::C_ResetAllBioBoosters() {
}

void UFSDCheatManager::C_ResetAll_Vanity() {
}

void UFSDCheatManager::C_ResetAll_Enhancements() {
}

void UFSDCheatManager::C_ResetAchievements() {
}

void UFSDCheatManager::C_Reset_WeaponSkinsAndUpgrades() {
}

void UFSDCheatManager::C_Reset_WeaponSkins_Paintjobs() {
}

void UFSDCheatManager::C_Reset_WeaponSkins_Framworks() {
}

void UFSDCheatManager::C_Reset_WeaponSkins() {
}

void UFSDCheatManager::C_Reset_Poses() {
}

void UFSDCheatManager::C_Reset_PickaxeParts() {
}

void UFSDCheatManager::C_Reset_Perks() {
}

void UFSDCheatManager::C_Reset_MinersManual() {
}

void UFSDCheatManager::C_Reset_Drinks() {
}

void UFSDCheatManager::C_ReplaceBioBoosterDeck(const FString& InDeckName, int32 ReplaceIndex) {
}

void UFSDCheatManager::C_RemoveAllWidgets() {
}

void UFSDCheatManager::C_RefreshDailyDeal(int32 Seed) {
}

void UFSDCheatManager::C_Refresh_Daily_Special(int32 Index) {
}

void UFSDCheatManager::C_Refinery_BreakPipes() {
}

void UFSDCheatManager::C_RecordMode() {
}

void UFSDCheatManager::C_ProjectileStoreDebugEvents(bool Enabled) {
}

void UFSDCheatManager::C_ProjectilePrintDebugEvents(int32 ID) {
}

void UFSDCheatManager::C_ProjectileDrawPaths() {
}

void UFSDCheatManager::C_ProjectileDebugPrintToggle(bool Enabled) {
}

void UFSDCheatManager::C_PrintLoadout() {
}

void UFSDCheatManager::C_PlayNewMusic(int32 songIndex) const {
}

void UFSDCheatManager::C_PlayersAllowedToPickSameClass(const bool CanPickSameClass) {
}

void UFSDCheatManager::C_OpenLevel(const FString& LevelPath) const {
}

void UFSDCheatManager::C_NukeCheatConsole() {
}

void UFSDCheatManager::C_MoveToLastStage() {
}

void UFSDCheatManager::C_MissionMap_Rotate() {
}

void UFSDCheatManager::C_MissionMap_AutoRotate(bool Enabled) {
}

void UFSDCheatManager::C_MinersManual_EnableWorkInProgress(UObject* WorldContextObject) {
}

void UFSDCheatManager::C_MessUpEnhancementSlotSave() {
}

void UFSDCheatManager::C_Mastery_ResetRerollTimer() {
}

void UFSDCheatManager::C_Mastery_ResetNewDeploymentTimer() {
}

void UFSDCheatManager::C_Mastery_ResetCosmeticSheet1Token() {
}

void UFSDCheatManager::C_Mastery_IncrementDeploymentStat(int32 InIndex, int32 InAmount) {
}

void UFSDCheatManager::C_Mastery_CompleteDeployment(int32 InIndex) {
}

void UFSDCheatManager::C_Mastery_CompleteAllTasks() {
}

void UFSDCheatManager::C_Mastery_CompleteAllDeployments() {
}

void UFSDCheatManager::C_Mastery_AddMerit(int32 InMerit) {
}

void UFSDCheatManager::C_Mastery_AddMasteryBarXPSegment() {
}

void UFSDCheatManager::C_Mastery_AddMasteryBarXP(int32 InXP) {
}

void UFSDCheatManager::C_Mastery_AddMasteryBarLevel() {
}

void UFSDCheatManager::C_Mastery_AddCosmeticSheet1Token(int32 InCosmeticSheet1Token) {
}

void UFSDCheatManager::C_MachineEvents_Track(bool track) {
}

void UFSDCheatManager::C_MachineEvents_FinishCurrent() {
}

void UFSDCheatManager::C_KillTeam() {
}

void UFSDCheatManager::C_KillPlayer() {
}

void UFSDCheatManager::C_KillAllFriendly() {
}

void UFSDCheatManager::C_KillAll() {
}

void UFSDCheatManager::C_JumpToNextRoom() {
}

void UFSDCheatManager::C_JetBoots_Enable() {
}

void UFSDCheatManager::C_Intoxication_SetAll(int32 Percent) {
}

void UFSDCheatManager::C_Intoxication_Set(int32 Percent) {
}

void UFSDCheatManager::C_IncrementDifficulty() {
}

void UFSDCheatManager::C_IncrementAllMissionStats(int32 Amount) {
}

void UFSDCheatManager::C_GodMode(int32 forceEnable) {
}

void UFSDCheatManager::C_GiveAllGenericHeroItems() {
}

void UFSDCheatManager::C_GameRating_Reset() {
}

void UFSDCheatManager::C_GameDLC_ResetAnnouncements() {
}

void UFSDCheatManager::C_FSDEvent_ListEvents() {
}

void UFSDCheatManager::C_FSDEvent_ClearSeenRewards() {
}

void UFSDCheatManager::C_FlareInfiniteDuration(bool Enabled) {
}

void UFSDCheatManager::C_FixedPLSSeed(int32 Seed) {
}

void UFSDCheatManager::C_FixedMissionSeed(int32 Seed) {
}

void UFSDCheatManager::C_FailMission() {
}

void UFSDCheatManager::C_FadeFromBlack(UObject* WorldContextObject) {
}

void UFSDCheatManager::C_Facility_SpawnDataCore() {
}

void UFSDCheatManager::C_Facility_DisableShields() {
}

void UFSDCheatManager::C_Escort_ShowSmartRockDebug(bool shouldShow) {
}

void UFSDCheatManager::C_Escort_SetMuleSpeed(UObject* WorldContextObject, float Speed) {
}

void UFSDCheatManager::C_Escort_JumpToNextPhase(UObject* WorldContextObject) {
}

void UFSDCheatManager::C_Escort_AddOilShale(int32 Number) {
}

void UFSDCheatManager::C_EndRunSetDebugBonusXp(const float BonusXp) const {
}

void UFSDCheatManager::C_EndLevelRemoveDebugBonusXp() const {
}

void UFSDCheatManager::C_DLC_ClearAnnounced() {
}

void UFSDCheatManager::C_DisableBackendEvents() {
}

void UFSDCheatManager::C_DebugTargetEnemySync(bool FindIt) {
}

void UFSDCheatManager::C_DataTerminal_Activate(UObject* WorldContextObject) {
}

void UFSDCheatManager::C_CompleteStageWithoutPlayersEscaping() {
}

void UFSDCheatManager::C_CompleteStage() {
}

void UFSDCheatManager::C_CompleteRun() {
}

void UFSDCheatManager::C_CompleteObjectives() {
}

void UFSDCheatManager::C_ClearWelcomeMessageSeen() {
}

void UFSDCheatManager::C_ClearAllMissionStats() {
}

void UFSDCheatManager::C_CheckHasOtherCharacterBioboosterDeckEquipped() {
}

void UFSDCheatManager::C_Character_ResetXP() {
}

void UFSDCheatManager::C_Character_LevelUp(int32 Amount) {
}

void UFSDCheatManager::C_Character_AddXP(int32 Number) {
}

void UFSDCheatManager::C_BXE_StartingWeapons_UnlockAll() const {
}

void UFSDCheatManager::C_BXE_StartingWeapons_ResetAll() const {
}

void UFSDCheatManager::C_BXE_SetStatPrintOutEnabled(bool Active) {
}

void UFSDCheatManager::C_BXE_MissionStats_ResetAll() {
}

void UFSDCheatManager::C_BXE_GymQuest_Complete() {
}

void UFSDCheatManager::C_BiomeEffectsEnabled(bool Enabled) {
}

void UFSDCheatManager::C_Ascension_SetLevelSpecific(APlayerCharacter* onCharacter, int32 Number) {
}

void UFSDCheatManager::C_Ascension_SetLevel(int32 Number) {
}

void UFSDCheatManager::C_Ascension_ClearRewardsSeen() {
}

void UFSDCheatManager::C_AscendSelectedCharacter() {
}

void UFSDCheatManager::C_AddUncappedXP(int32 Amount) {
}

void UFSDCheatManager::C_AddForgingXP(int32 Number) {
}

void UFSDCheatManager::C_AddAllResourcesToInventory(float Amount) {
}

void UFSDCheatManager::C_Ability_Unblock() {
}

void UFSDCheatManager::C_Ability_SetNoCooldown(bool Inactive) {
}

void UFSDCheatManager::AddResourceToTeamDeposit(UResourceData* Resource, float Amount) {
}

void UFSDCheatManager::AddIntelAndClaimObjectives(const int32 newAmount) const {
}

void UFSDCheatManager::AddIntel(const int32 newAmount) const {
}


