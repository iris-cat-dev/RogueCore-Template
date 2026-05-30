#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GameFramework/SaveGame.h"
#include "EntitlementSave.h"
#include "EntitlementSaveProvider.h"
#include "EntitlementSaveProvider.h"
#include "AchievementSave.h"
#include "AscensionRewardsSave.h"
#include "BXEDiveSaveData.h"
#include "BXEMissionStats.h"
#include "BXERunHistory.h"
#include "BXEStartLoadout.h"
#include "CampaignSave.h"
#include "CharacterEnhancementsSave.h"
#include "CharacterSave.h"
#include "ClaimableRewardEntry.h"
#include "ConsoleOptionsInSaveGame.h"
#include "CosmeticSheetSave.h"
#include "DrinkSave.h"
#include "EFSDFaction.h"
#include "EItemCategory.h"
#include "ERunDepth.h"
#include "ESonyControllerLightMode.h"
#include "ESonyControllerMotionMapping.h"
#include "ESonyInputSettingsBools.h"
#include "ESonyInputSettingsFloats.h"
#include "EUnlockRarityType.h"
#include "EnhancementClaimsSave.h"
#include "EntitlementSave.h"
#include "EventRewardSave.h"
#include "FSDEventRewardsSave.h"
#include "ForgingSave.h"
#include "GDKWinOptionsInSaveGame.h"
#include "IntelCampaignSave.h"
#include "ItemNotificationInfo.h"
#include "ItemUINotifications.h"
#include "JettyBootsSave.h"
#include "LoadedBoosterDeckItem.h"
#include "MMTieredUpgradeStruct.h"
#include "MissionStatSave.h"
#include "OpsComDeploymentSave.h"
#include "OpsComTaskSave.h"
#include "OptionsInSaveGame.h"
#include "ResourcesSave.h"
#include "RewardSave.h"
#include "RewardTreeSave.h"
#include "SaveGameStageIndexes.h"
#include "SchematicSave.h"
#include "SeasonSave.h"
#include "SkinList.h"
#include "SonyInputSettings.h"
#include "Templates/SubclassOf.h"
#include "UnlockableItemSave.h"
#include "VanityMasterySave.h"
#include "WatchedTutorial.h"
#include "FSDSaveGame.generated.h"

class AActor;
class APlayerCharacter;
class UBXEUnlockBase;
class UBXEUnlockTieredGeneric;
class UBioBoosterDeck;
class UFSDGameInstance;
class UFSDSaveGame;
class UItemID;
class UItemSkin;
class UObject;
class UPlayerCharacterID;
class UResourceData;
class URewardPool;

UCLASS(Blueprintable)
class ROGUECORE_API UFSDSaveGame : public USaveGame, public IEntitlementSaveProvider {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTutorialsResetDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkinSignature, UItemSkin*, Skin, UItemID*, ItemID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FResourceAmountChangedDelegate, const UResourceData*, Resource, float, previousAmount, float, newAmount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerProgressChangedSignature, int32, Rank, int32, Stars);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPersonalMetricsChangedSignature, bool, AllowPersonalMetrics);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FItemUnlockedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FItemUINotificationDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterSignature, TSubclassOf<APlayerCharacter>, CharacterClass);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterProgressChangedSignature, TSubclassOf<APlayerCharacter>, CharacterClass, int32, Level, float, Progress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBioBoosterDecksUpdated, const TArray<UBioBoosterDeck*>&, InBioBoosterDecks);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAscensionSignature, TSubclassOf<APlayerCharacter>, CharacterClass, int32, AscensionCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnonymousMetricsChangedSignature, bool, AllowAnonymousMetrics);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAscensionRewardsSave AscensionRewardsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSDEventRewardsSave FSDEventRewardsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntitlementSave GameDLCSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SaveSlotTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionStatSave MissionStatsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpsComTaskSave TaskSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpsComDeploymentSave DeploymentSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnhancementClaimsSave EnhancementClaimsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterEnhancementsSave EquippedEnhancements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementSave AchievementSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterEnhancementsSave> EnhancementLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VersionNumber;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FResourceAmountChangedDelegate OnResourceAmountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSkinSignature OnSkinUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterProgressChangedSignature OnCharacterSaveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterSignature OnCharacterCanAscend;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAscensionSignature OnCharacterAscended;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerProgressChangedSignature OnPlayerProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTutorialsResetDelegate OnTutorialsReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPersonalMetricsChangedSignature OnGameplayAllowAnalyticsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemUnlockedDelegate OnItemUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemUINotificationDelegate OnItemUINotificationChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBioBoosterDecksUpdated OnBioBoosterDecksUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSchematicSave SchematicSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FJettyBootsSave JettyBootsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVanityMasterySave VanityMasterySave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEStartLoadout StartLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockableItemSave StartingWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEMissionStats MissionStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXERunHistory RunHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntelCampaignSave IntelCampaignSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsThirdRiskVectorUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRewardSave RewardSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveCreatedInPatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeenWelcomeToEarlyAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnonymousID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasReceivedDiscordReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnLockedComplexities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnLockedDurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnLockedPlanetZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSave> CharacterSaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalLevelsGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeedsLevelsGainedFixup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastBoughtDailyDealSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrinkSave Drinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PurchasedItemUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnlockedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> OwnedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FItemNotificationInfo> ItemsWithNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSkinList> UnlockedItemSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> UnlockedPickaxeParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnLockedVanityItemIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> HiddenUICategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, int32> MinersManualKnownObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FMMTieredUpgradeStruct> MinersManualKnownTieredUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> UnlockedAccessConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnlockedCustomizers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FGuid> CustomizationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSaveGameStageIndexes> ClaimedRewardsForRuns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastUsedWeeklyRunSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventRewardSave EventRewardSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUINotifications ItemUINotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RejoinRunId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstRejoinAttempt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowingStatsInEscapeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaveShownInitialMissionShoutNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERunDepth> RatedRunDepths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RunThatMustBeRated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDepth RunThatMustBeRatedDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime RunThatMustBeRatedPlayedDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourcesSave Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWatchedTutorial> WatchedTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsoleOptionsInSaveGame ConsoleOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDKWinOptionsInSaveGame WinGDKOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionsInSaveGame WindowsOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPlayedTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowHowToRestartTutorialPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPlayedIntroMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasClaimedSteamGroupLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCooperEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasJoinedXboxClub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowGameplayAnalyticsTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowStartupScreenWhenBootingGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowNarrativeVideoWhenBootingGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalPlayTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, int32> SelectedLoadout;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 userIdx;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 CurrLoadoutIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SaveToDiskCounter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BackupSaveIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ExternalBackupSaveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* LastPlayedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastShownVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSonyInputSettings SonyInputSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreRandomLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FBXEDiveSaveData> DiveSaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UnlockedRunDepths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, int32> EnhancementSlotsBought;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRewardTreeSave EnhancementsTreeSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmeticSheetSave CosmeticSheetSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMutatedRunsUnlocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDGameInstance* FSDGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool SaveInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FForgingSave Forging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCampaignSave CampaignSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeasonSave SeasonSave;
    
public:
    UFSDSaveGame();

    UFUNCTION(BlueprintCallable)
    bool UnlockToMinersManual(FGuid ObjectId, bool& OutNewEntry, EUnlockRarityType Rarity);
    
    UFUNCTION(BlueprintCallable)
    bool TrySellResource(UResourceData* Resource, int32 Amount, int32& Price);
    
    UFUNCTION(BlueprintCallable)
    bool TryDeductResources(const TMap<UResourceData*, int32>& NewResources);
    
    UFUNCTION(BlueprintCallable)
    bool TryBuyResource(UResourceData* Resource, int32 Amount, int32& Price);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShowStartupScreenWhenBootingGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShowNarrativeVideoWhenBootingGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayFirstSchematicMessage() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSonyInputSettingMotionXMapping(ESonyControllerMotionMapping NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSonyInputSettingLightMode(ESonyControllerLightMode NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void SetSonyInputSettingFloat(UObject* WorldContext, ESonyInputSettingsFloats Setting, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSonyInputSettingBool(ESonyInputSettingsBools Setting, bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowStartupScreenWhenBootingGame(const bool NewShow);
    
    UFUNCTION(BlueprintCallable)
    void SetShowNarrativeVideoWhenBootingGame(const bool NewShow);
    
    UFUNCTION(BlueprintCallable)
    void SetRunThatMustBeRated(const ERunDepth RunDepth, const FGuid& RunId);
    
    UFUNCTION(BlueprintCallable)
    void SetIsShowingStatsInEscapeMenu(const bool NewShowing);
    
    UFUNCTION(BlueprintCallable)
    void SetIndexAndName(int32 NewIndex, const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreRandomLoadout(bool inIgnoreRandomLoadout);
    
    UFUNCTION(BlueprintCallable)
    void SetHaveShownInitialMissionShoutNotification(const bool NewHaveShown);
    
    UFUNCTION(BlueprintCallable)
    void SetHasJoinedXboxClub();
    
    UFUNCTION(BlueprintCallable)
    void SetHasClaimSteamGroupLoot();
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayAnalytics(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SetFaction(EFSDFaction newFaction, bool Reasign);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedItemID(EItemCategory Category, UPlayerCharacterID* PlayerId, UItemID* Item);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId, TSubclassOf<AActor> Item);
    
    UFUNCTION(BlueprintCallable)
    void SetDiscordReward(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SetCooperEnabled(const bool IsAllowed);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterLoadout(UPlayerCharacterID* characterID, int32 loadoutNumber);
    
    UFUNCTION(BlueprintCallable)
    bool SetBioBoosterDecks(UPlayerCharacterID* characterID, const TArray<FLoadedBoosterDeckItem>& InBoosterDecks);
    
    UFUNCTION(BlueprintCallable)
    void SaveToDisk();
    
    UFUNCTION(BlueprintCallable)
    static bool SaveSlotToDisk(UFSDSaveGame* SaveSlot, const FString& slotName, int32 NewUserIdx);
    
    UFUNCTION(BlueprintCallable)
    void ResetTutorials();
    
    UFUNCTION(BlueprintCallable)
    void ResetSonyTouchSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetSonyMotionSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetSonyDualSenseSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetRejoinRunId();
    
    UFUNCTION(BlueprintCallable)
    void RejoinAttempted();
    
    UFUNCTION(BlueprintCallable)
    void RefreshLoadoutFromCharacter(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ReceivedDiscordReward();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MarkWelcomeMessageSeen();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkRunDepthRated(const ERunDepth RunDepth);
    
    UFUNCTION(BlueprintCallable)
    void MarkFirstSchematicMessageSeen();
    
    UFUNCTION(BlueprintCallable)
    void MarkAscensionRewardScreenSeen(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void LevelUpCharacter(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowingStatsInEscapeMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObsolete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMinersManual(FGuid ObjectId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstRejoinAttempt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCooperEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterEligibleForAscension(const UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveShownInitialMissionShoutNotification() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveRejoinRunId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenAscensionRewardScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingAscensionGifts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCharacterAscended(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable)
    static bool HasBackupWithMoreProgress(UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyCharacterAscended() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnotherCharacterBioBoosterDeckEquipped(const UPlayerCharacterID* InCharacterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockPickedCount(const UBXEUnlockBase* Unlock) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimesAscendedForCharacter(const UPlayerCharacterID* InID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTieredUnlockPickCount(const UBXEUnlockTieredGeneric* Unlock, EUnlockRarityType Rarity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESonyControllerMotionMapping GetSonyInputSettingMotionXMapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESonyControllerLightMode GetSonyInputSettingLightMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSonyInputSettingFloat(ESonyInputSettingsFloats Setting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSonyInputSettingBool(ESonyInputSettingsBools Setting) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetSlotTimeStamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSlotLoadedFrom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSlotIndexName(int32 NewUserIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSlotIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowWelcomeMessage() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedLoadoutIndex(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSaveSlotName(int32 NewUserIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERunDepth GetRunThatMustBeRatedDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetRunThatMustBeRated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceSellingPrice(UResourceData* Resource, int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceBuyingPrice(UResourceData* Resource, int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceAmount(const UResourceData* Resource) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredXPForLevel(int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetRejoinRunId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerAscensionRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPendingAscensionGifts(TArray<FClaimableRewardEntry>& OutRewards, UPlayerCharacterID* OptionalID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainSaves(UFSDGameInstance* GameInstance, TArray<UFSDSaveGame*>& outMainSaves);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex();
    
    UFUNCTION(BlueprintCallable)
    bool GetHasClaimedSteamGroupLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFSDFaction GetFaction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemID* GetEquippedItemID(EItemCategory Category, UPlayerCharacterID* PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClassXP(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClassLevel(const UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterAscensionCount(const FGuid& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBioBoosterDeck*> GetBioBoosterDecks(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAvailableUserSlotIndex(UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<UBioBoosterDeck*> GetAscendedCharactersBioBoosterDecks() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<UFSDSaveGame*> GetAllSavesFromDisk(UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPlayerCharacterID*> GetAllAscendedCharacterIDs() const;
    
    UFUNCTION(BlueprintCallable)
    static void FixNamingOfMainSave(UFSDSaveGame* mainsave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesItMakeSenseToRateLastRun() const;
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFromDisk(UFSDGameInstance* GameInstance, const FString& slotName, int32 NewUserIdx);
    
    UFUNCTION(BlueprintCallable)
    void ClearRatedRunDepths();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void CheckAscensionAchievementProgress(UObject* WorldContext, bool IsRetroactive);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeBioBoosterDeck(UPlayerCharacterID* InCharacterID, const FLoadedBoosterDeckItem& InBoosterDeck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeBioBoosterDeck(UPlayerCharacterID* characterID, UBioBoosterDeck* DeckToChange) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAfford(const TMap<UResourceData*, int32>& NewResources) const;
    
    UFUNCTION(BlueprintCallable)
    FString AscendedClassesString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowGameplayAnalytics() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    int32 AddClassXP(UObject* WorldContext, UPlayerCharacterID* characterID, int32 XP);
    
    UFUNCTION(BlueprintCallable)
    void AddClaimedReward(URewardPool* Reward);
    

    // Fix for true pure virtual functions not being implemented
};

