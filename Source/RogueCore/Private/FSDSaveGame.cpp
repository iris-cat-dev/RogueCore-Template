#include "FSDSaveGame.h"
#include "Templates/SubclassOf.h"

UFSDSaveGame::UFSDSaveGame() {
    this->VersionNumber = 0;
    this->IsThirdRiskVectorUnlocked = false;
    this->SaveCreatedInPatch = 1;
    this->bSeenWelcomeToEarlyAccess = false;
    this->HasReceivedDiscordReward = false;
    this->Faction = EFSDFaction::NoFaction;
    this->TotalLevelsGained = 0;
    this->NeedsLevelsGainedFixup = true;
    this->LastBoughtDailyDealSeed = -1;
    this->LastUsedWeeklyRunSeed = -1;
    this->FirstRejoinAttempt = false;
    this->bIsShowingStatsInEscapeMenu = false;
    this->bHaveShownInitialMissionShoutNotification = false;
    this->RunThatMustBeRatedDepth = ERunDepth::None;
    this->FirstSession = true;
    this->HasPlayedTutorial = false;
    this->ShowHowToRestartTutorialPrompt = false;
    this->HasPlayedIntroMessage = false;
    this->HasClaimedSteamGroupLoot = false;
    this->bIsCooperEnabled = true;
    this->HasJoinedXboxClub = false;
    this->AllowGameplayAnalyticsTracking = true;
    this->bShowStartupScreenWhenBootingGame = true;
    this->bShowNarrativeVideoWhenBootingGame = true;
    this->Index = -1;
    this->TotalPlayTimeSeconds = 0.00f;
    this->userIdx = 0;
    this->CurrLoadoutIdx = 0;
    this->SaveToDiskCounter = 0;
    this->BackupSaveIndex = 0;
    this->ExternalBackupSaveIndex = 0;
    this->LastPlayedCharacter = nullptr;
    this->bIgnoreRandomLoadout = false;
    this->bIsMutatedRunsUnlocked = false;
    this->FSDGameInstance = nullptr;
    this->SaveInProgress = false;
}

bool UFSDSaveGame::UnlockToMinersManual(FGuid ObjectId, bool& OutNewEntry, EUnlockRarityType Rarity) {
    return false;
}

bool UFSDSaveGame::TrySellResource(UResourceData* Resource, int32 Amount, int32& Price) {
    return false;
}

bool UFSDSaveGame::TryDeductResources(const TMap<UResourceData*, int32>& NewResources) {
    return false;
}

bool UFSDSaveGame::TryBuyResource(UResourceData* Resource, int32 Amount, int32& Price) {
    return false;
}

bool UFSDSaveGame::ShowStartupScreenWhenBootingGame() const {
    return false;
}

bool UFSDSaveGame::ShowNarrativeVideoWhenBootingGame() const {
    return false;
}

bool UFSDSaveGame::ShouldDisplayFirstSchematicMessage() const {
    return false;
}

void UFSDSaveGame::SetSonyInputSettingMotionXMapping(ESonyControllerMotionMapping NewValue) {
}

void UFSDSaveGame::SetSonyInputSettingLightMode(ESonyControllerLightMode NewValue) {
}

void UFSDSaveGame::SetSonyInputSettingFloat(UObject* WorldContext, ESonyInputSettingsFloats Setting, float NewValue) {
}

void UFSDSaveGame::SetSonyInputSettingBool(ESonyInputSettingsBools Setting, bool NewValue) {
}

void UFSDSaveGame::SetShowStartupScreenWhenBootingGame(const bool NewShow) {
}

void UFSDSaveGame::SetShowNarrativeVideoWhenBootingGame(const bool NewShow) {
}

void UFSDSaveGame::SetRunThatMustBeRated(const ERunDepth RunDepth, const FGuid& RunId) {
}

void UFSDSaveGame::SetIsShowingStatsInEscapeMenu(const bool NewShowing) {
}

void UFSDSaveGame::SetIndexAndName(int32 NewIndex, const FString& NewName) {
}

void UFSDSaveGame::SetIgnoreRandomLoadout(bool inIgnoreRandomLoadout) {
}

void UFSDSaveGame::SetHaveShownInitialMissionShoutNotification(const bool NewHaveShown) {
}

void UFSDSaveGame::SetHasJoinedXboxClub() {
}

void UFSDSaveGame::SetHasClaimSteamGroupLoot() {
}

void UFSDSaveGame::SetGameplayAnalytics(bool State) {
}

void UFSDSaveGame::SetFaction(EFSDFaction newFaction, bool Reasign) {
}

void UFSDSaveGame::SetEquippedItemID(EItemCategory Category, UPlayerCharacterID* PlayerId, UItemID* Item) {
}

void UFSDSaveGame::SetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId, TSubclassOf<AActor> Item) {
}

void UFSDSaveGame::SetDiscordReward(bool State) {
}

void UFSDSaveGame::SetCooperEnabled(const bool IsAllowed) {
}

void UFSDSaveGame::SetCharacterLoadout(UPlayerCharacterID* characterID, int32 loadoutNumber) {
}

bool UFSDSaveGame::SetBioBoosterDecks(UPlayerCharacterID* characterID, const TArray<FLoadedBoosterDeckItem>& InBoosterDecks) {
    return false;
}

void UFSDSaveGame::SaveToDisk() {
}

bool UFSDSaveGame::SaveSlotToDisk(UFSDSaveGame* SaveSlot, const FString& slotName, int32 NewUserIdx) {
    return false;
}

void UFSDSaveGame::ResetTutorials() {
}

void UFSDSaveGame::ResetSonyTouchSettings() {
}

void UFSDSaveGame::ResetSonyMotionSettings() {
}

void UFSDSaveGame::ResetSonyDualSenseSettings() {
}

void UFSDSaveGame::ResetRejoinRunId() {
}

void UFSDSaveGame::RejoinAttempted() {
}

void UFSDSaveGame::RefreshLoadoutFromCharacter(UPlayerCharacterID* characterID) {
}

bool UFSDSaveGame::ReceivedDiscordReward() {
    return false;
}

void UFSDSaveGame::MarkWelcomeMessageSeen() {
}

void UFSDSaveGame::MarkRunDepthRated(const ERunDepth RunDepth) {
}

void UFSDSaveGame::MarkFirstSchematicMessageSeen() {
}

void UFSDSaveGame::MarkAscensionRewardScreenSeen(UPlayerCharacterID* characterID) {
}

void UFSDSaveGame::LevelUpCharacter(UObject* WorldContext, UPlayerCharacterID* characterID) {
}

bool UFSDSaveGame::IsShowingStatsInEscapeMenu() const {
    return false;
}

bool UFSDSaveGame::IsObsolete() const {
    return false;
}

bool UFSDSaveGame::IsInMinersManual(FGuid ObjectId) const {
    return false;
}

bool UFSDSaveGame::IsFirstRejoinAttempt() const {
    return false;
}

bool UFSDSaveGame::IsCooperEnabled() const {
    return false;
}

bool UFSDSaveGame::IsCharacterEligibleForAscension(const UPlayerCharacterID* characterID) const {
    return false;
}

bool UFSDSaveGame::HaveShownInitialMissionShoutNotification() const {
    return false;
}

bool UFSDSaveGame::HaveRejoinRunId() const {
    return false;
}

bool UFSDSaveGame::HasSeenAscensionRewardScreen() const {
    return false;
}

bool UFSDSaveGame::HasPendingAscensionGifts() const {
    return false;
}

bool UFSDSaveGame::HasCharacterAscended(UPlayerCharacterID* characterID) const {
    return false;
}

bool UFSDSaveGame::HasBackupWithMoreProgress(UFSDGameInstance* GameInstance) {
    return false;
}

bool UFSDSaveGame::HasAnyCharacterAscended() const {
    return false;
}

bool UFSDSaveGame::HasAnotherCharacterBioBoosterDeckEquipped(const UPlayerCharacterID* InCharacterID) const {
    return false;
}

int32 UFSDSaveGame::GetUnlockPickedCount(const UBXEUnlockBase* Unlock) const {
    return 0;
}

int32 UFSDSaveGame::GetTimesAscendedForCharacter(const UPlayerCharacterID* InID) const {
    return 0;
}

int32 UFSDSaveGame::GetTieredUnlockPickCount(const UBXEUnlockTieredGeneric* Unlock, EUnlockRarityType Rarity) const {
    return 0;
}

ESonyControllerMotionMapping UFSDSaveGame::GetSonyInputSettingMotionXMapping() const {
    return ESonyControllerMotionMapping::Yaw;
}

ESonyControllerLightMode UFSDSaveGame::GetSonyInputSettingLightMode() const {
    return ESonyControllerLightMode::Disabled;
}

float UFSDSaveGame::GetSonyInputSettingFloat(ESonyInputSettingsFloats Setting) const {
    return 0.0f;
}

bool UFSDSaveGame::GetSonyInputSettingBool(ESonyInputSettingsBools Setting) const {
    return false;
}

FDateTime UFSDSaveGame::GetSlotTimeStamp() const {
    return FDateTime{};
}

FString UFSDSaveGame::GetSlotLoadedFrom() const {
    return TEXT("");
}

FString UFSDSaveGame::GetSlotIndexName(int32 NewUserIdx) {
    return TEXT("");
}

FString UFSDSaveGame::GetSlotIndex() const {
    return TEXT("");
}

bool UFSDSaveGame::GetShowWelcomeMessage() const {
    return false;
}

int32 UFSDSaveGame::GetSelectedLoadoutIndex(UPlayerCharacterID* characterID) const {
    return 0;
}

FString UFSDSaveGame::GetSaveSlotName(int32 NewUserIdx) {
    return TEXT("");
}

ERunDepth UFSDSaveGame::GetRunThatMustBeRatedDepth() const {
    return ERunDepth::None;
}

FGuid UFSDSaveGame::GetRunThatMustBeRated() const {
    return FGuid{};
}

int32 UFSDSaveGame::GetResourceSellingPrice(UResourceData* Resource, int32 Amount) const {
    return 0;
}

int32 UFSDSaveGame::GetResourceBuyingPrice(UResourceData* Resource, int32 Amount) const {
    return 0;
}

float UFSDSaveGame::GetResourceAmount(const UResourceData* Resource) const {
    return 0.0f;
}

int32 UFSDSaveGame::GetRequiredXPForLevel(int32 Level) const {
    return 0;
}

FGuid UFSDSaveGame::GetRejoinRunId() const {
    return FGuid{};
}

int32 UFSDSaveGame::GetPlayerRank() const {
    return 0;
}

int32 UFSDSaveGame::GetPlayerAscensionRank() const {
    return 0;
}

void UFSDSaveGame::GetPendingAscensionGifts(TArray<FClaimableRewardEntry>& OutRewards, UPlayerCharacterID* OptionalID) const {
}

FString UFSDSaveGame::GetName() {
    return TEXT("");
}

int32 UFSDSaveGame::GetMainSaves(UFSDGameInstance* GameInstance, TArray<UFSDSaveGame*>& outMainSaves) {
    return 0;
}

int32 UFSDSaveGame::GetIndex() {
    return 0;
}

bool UFSDSaveGame::GetHasClaimedSteamGroupLoot() {
    return false;
}

EFSDFaction UFSDSaveGame::GetFaction() {
    return EFSDFaction::NoFaction;
}

UItemID* UFSDSaveGame::GetEquippedItemID(EItemCategory Category, UPlayerCharacterID* PlayerId) const {
    return NULL;
}

TSubclassOf<AActor> UFSDSaveGame::GetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId) const {
    return NULL;
}

int32 UFSDSaveGame::GetClassXP(UPlayerCharacterID* characterID) const {
    return 0;
}

int32 UFSDSaveGame::GetClassLevel(const UPlayerCharacterID* characterID) const {
    return 0;
}

int32 UFSDSaveGame::GetCharacterAscensionCount(const FGuid& PlayerId) const {
    return 0;
}

TArray<UBioBoosterDeck*> UFSDSaveGame::GetBioBoosterDecks(UPlayerCharacterID* characterID) const {
    return TArray<UBioBoosterDeck*>();
}

int32 UFSDSaveGame::GetAvailableUserSlotIndex(UFSDGameInstance* GameInstance) {
    return 0;
}

TSet<UBioBoosterDeck*> UFSDSaveGame::GetAscendedCharactersBioBoosterDecks() const {
    return TSet<UBioBoosterDeck*>();
}

TArray<UFSDSaveGame*> UFSDSaveGame::GetAllSavesFromDisk(UFSDGameInstance* GameInstance) {
    return TArray<UFSDSaveGame*>();
}

TArray<UPlayerCharacterID*> UFSDSaveGame::GetAllAscendedCharacterIDs() const {
    return TArray<UPlayerCharacterID*>();
}

void UFSDSaveGame::FixNamingOfMainSave(UFSDSaveGame* mainsave) {
}

bool UFSDSaveGame::DoesItMakeSenseToRateLastRun() const {
    return false;
}

bool UFSDSaveGame::DeleteFromDisk(UFSDGameInstance* GameInstance, const FString& slotName, int32 NewUserIdx) {
    return false;
}

void UFSDSaveGame::ClearRatedRunDepths() {
}

void UFSDSaveGame::CheckAscensionAchievementProgress(UObject* WorldContext, bool IsRetroactive) {
}

bool UFSDSaveGame::ChangeBioBoosterDeck(UPlayerCharacterID* InCharacterID, const FLoadedBoosterDeckItem& InBoosterDeck) {
    return false;
}

bool UFSDSaveGame::CanChangeBioBoosterDeck(UPlayerCharacterID* characterID, UBioBoosterDeck* DeckToChange) const {
    return false;
}

bool UFSDSaveGame::CanAfford(const TMap<UResourceData*, int32>& NewResources) const {
    return false;
}

FString UFSDSaveGame::AscendedClassesString() {
    return TEXT("");
}

bool UFSDSaveGame::AllowGameplayAnalytics() const {
    return false;
}

int32 UFSDSaveGame::AddClassXP(UObject* WorldContext, UPlayerCharacterID* characterID, int32 XP) {
    return 0;
}

void UFSDSaveGame::AddClaimedReward(URewardPool* Reward) {
}


