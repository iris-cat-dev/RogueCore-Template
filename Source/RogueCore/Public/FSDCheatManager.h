#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManager -FallbackName=CheatManager
#include "CheatEventDelegate.h"
#include "GameFramework/CheatManager.h"
#include "Templates/SubclassOf.h"
#include "FSDCheatManager.generated.h"

class AActor;
class AFSDAIController;
class APawn;
class APlayerCharacter;
class UBaseCritterDescriptor;
class UEnemyDescriptor;
class UItemID;
class UObject;
class UPlayerCharacterID;
class UResourceData;
class UWidget;

UCLASS(Blueprintable)
class ROGUECORE_API UFSDCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowPawnHealthDelegate, bool, InShow);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowPawnHealthDelegate OnShowPawnHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowPawnHealth;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RoomJumpCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PreviousMaxDistanceBeforeCleanup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatEvent ToggleHoopGameMovement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatEvent OnShowLevelTimeDebugText;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> SpawnPosMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EscortShowSmartRockDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUsingSavedCheats;
    
public:
    UFSDCheatManager();

    UFUNCTION(BlueprintCallable)
    void SwitchCharacter(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEnemies(UEnemyDescriptor* descriptor, int32 count);
    
    UFUNCTION(BlueprintCallable)
    void SpawnCritters(UBaseCritterDescriptor* descriptor, int32 count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnBosco(TSoftClassPtr<APawn> DroneClass, TSubclassOf<AFSDAIController> aControllerClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowTutorialDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowPawnHealth(bool InShow);
    
    UFUNCTION(BlueprintCallable)
    void SetStandingDown(bool standingDown);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnEnemies(bool NewSpawnEnemies);
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool SetSavedCheatValue(const FName CheatName, const int32& ValueToSet);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetQuadPickAxe(bool Quad);
    
    UFUNCTION(BlueprintCallable)
    static void SetMarketingModeEnabled(const bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisible(bool ShowHUD);
    
    UFUNCTION(BlueprintCallable)
    void SetGodMode(bool God);
    
    UFUNCTION(BlueprintCallable)
    void SetFastMovement(bool fast);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void SetActorTrackingCheat(AActor* Actor, bool shouldTrack);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ResetCritChance(APlayerCharacter* Character);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Refresh_Daily_Special(int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_BXE_GymQuest_Complete();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetSpacerigIntroMessage();
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void ResetIntelCampaign() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_RemoveResources(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_RemoveCraftingResource(int32 Amount, int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_Chips_Set(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_Chips_Add(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddSeasonToken(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddResources_Player(float Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddResources(float Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddMatrixCores(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddHollomite(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddGymCredit(int32 Type, int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddGold(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddDystrum(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddCraftingResource(int32 Amount, int32 Type) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_AddCalories(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_Add_Phazyonite(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_Add_BitterGem(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void R_Add_Aquarq(int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnEnemiesEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMarketingModeEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsInGodMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlyModeActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFlareGunProjectilesInfinite();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFastMovementActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool GetSavedCheatValue(const FName CheatName, int32& ValueToGet);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetListOfRoomNames(TArray<FString>& roomNames);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* GetFocusedUMGWidget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Expansion_LevelUp() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void Expansion_AddXP_Player(int32 Amount) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void Expansion_AddXP(int32 Amount) const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllInstances(TSubclassOf<AActor> destroy);
    
    UFUNCTION(BlueprintCallable, Exec)
    void D_Rejoin_RestoreState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void D_MovieModeStartWithCameraShake(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void D_MovieModeStartAtOrigin(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void D_EnableMovieModeInSpacerig(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void D_EnableMovieMode(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CopySeedForStage();
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void CompleteRandomIntelChallenges(const int32 AmountToComplete) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void CompleteIntelCampaign() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void ClaimIntelObjectives() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void ClaimIntelChallenges() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObjectm"))
    static void Cheat_UnlockWeapon(UObject* WorldContextObjectm, UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_UnlockAllWeapons(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_UnlockAllUpgrades(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_UnlockAll_Poses(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_UnlockAll_Beers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_Schematic_UnlockAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_Schematic_ResetAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_Schematic_GiveRandom(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_Schematic_ForgeAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_Resources(UObject* WorldContextObject, float Amount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_ResetIntelCampaign(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_ResetEquippedUpgrades(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_RemoveResources(UObject* WorldContextObject, int32 Amount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_PickAxeVanity_UnlockAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_PickAxeVanity_ResetAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_MinersManual_ShowAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_GenerateNewMissionSeed(UObject* WorldContextObject, bool Enabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_ForceTreasure(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_ForceLostPack(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_CompleteIntelCampaign(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_Campaign_Complete(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_Campaign_Advance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_AddXP(UObject* WorldContextObject, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void Cheat_AddSpawnPosMarker(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_AddScrip(UObject* WorldContextObject, int32 InAmount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_AddMerit(UObject* WorldContextObject, int32 InAmount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Cheat_AddIntel(UObject* WorldContextObject, const int32 newAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Windows_PrintStack() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Windows_CloseAll() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_VanityMasteryResetXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_VanityMasteryAddXP(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockOverclocking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_WeaponUpgrades();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_WeaponSkins_Paintjobs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_WeaponSkins_Frameworks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_WeaponSkins();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Weapons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_StoreVanity();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Poses_ForAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Poses();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_PickaxeParts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Enhancements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Drinks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_Beers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll_ArmorMats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_UnlockAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Tutorials_ResetHints();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_TriggerFreeze(const float FreezeSeconds) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_TriggerEnsure() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_TriggerCrash() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_TriggerCheck() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Treasures_Track(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Treasures_Reward(int32 count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ToggleWaveTimeDebugText();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ToggleHoopGameMovement();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ToggleFadingEnabled();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ToggleFadingDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ToggleCanShowBlood();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_TestNegotiationDistribution(int32 TestTimes);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_TestGenerationDesync();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_TeleportToPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_TeleportPlayerToMe(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_TeleportAllPlayersToMe();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_StopMovement(bool shouldMove);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnScriptedWaveIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnScriptedWave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnNormalWave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnLocalPlayerInMedbay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnEvenRewarder();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnBXEDrone(TSoftClassPtr<APawn> DroneClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnAllPlayersInMedbay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SpawnAllParticles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Shouts_SetVoicePitch(float InPitch);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetUseSavedCheatsByDefault(bool useSavedCheats);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetTestingCharacter(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetSavedCheats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetPlayers(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetMarketingModeEnabled(const bool IsEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetInWorldSubtitlesActive(bool Active);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetInstantUsables(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetHostileReadingEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetHealth(float Health);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetFlyMode(bool flyEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetFastFlares();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetEnglish(int32 Val);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetDancing(bool shouldDance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetArmor(float Armor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SetAmmoCostEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ResetXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ResetToken();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ResetReroll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ResetPlagueHeartsCollected();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_IncrementChallenge(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_CompleteScripChallenge(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ClearChallenges();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_ClearAllProgress();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_AddXP(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_AddHeartsCollecdted(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Seasons_AddChallenge();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Schematics_UnlockAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Schematics_ResetAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Schematics_ForgeAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Schematics_ClearHasSeenFirstMessage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Schematic_GiveRandom();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_SaveVanitySetupToOpenEditor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Salvage_FixMiniMules();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_RevivePlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Revive();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Resupply();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetForgingXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetEnhancementTree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetCosmeticSheet();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetCheatedResources(int32 newAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetAllBioBoosters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetAll_Vanity();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetAll_Enhancements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ResetAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_WeaponSkinsAndUpgrades();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_WeaponSkins_Paintjobs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_WeaponSkins_Framworks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_WeaponSkins();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_Poses();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_PickaxeParts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_Perks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_MinersManual();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Reset_Drinks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ReplaceBioBoosterDeck(const FString& InDeckName, int32 ReplaceIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_RemoveAllWidgets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_RefreshDailyDeal(int32 Seed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Refresh_Daily_Special(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Refinery_BreakPipes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_RecordMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ProjectileStoreDebugEvents(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ProjectilePrintDebugEvents(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ProjectileDrawPaths();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ProjectileDebugPrintToggle(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_PrintLoadout();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_PlayNewMusic(int32 songIndex) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_PlayersAllowedToPickSameClass(const bool CanPickSameClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_OpenLevel(const FString& LevelPath) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_NukeCheatConsole();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MoveToLastStage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MissionMap_Rotate();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MissionMap_AutoRotate(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec, meta=(WorldContext="WorldContextObject"))
    void C_MinersManual_EnableWorkInProgress(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MessUpEnhancementSlotSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_ResetRerollTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_ResetNewDeploymentTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_ResetCosmeticSheet1Token();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_IncrementDeploymentStat(int32 InIndex, int32 InAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_CompleteDeployment(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_CompleteAllTasks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_CompleteAllDeployments();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_AddMerit(int32 InMerit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_AddMasteryBarXPSegment();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_AddMasteryBarXP(int32 InXP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_AddMasteryBarLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Mastery_AddCosmeticSheet1Token(int32 InCosmeticSheet1Token);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MachineEvents_Track(bool track);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_MachineEvents_FinishCurrent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_KillTeam();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_KillPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_KillAllFriendly();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_KillAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_JumpToNextRoom();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_JetBoots_Enable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Intoxication_SetAll(int32 Percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Intoxication_Set(int32 Percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_IncrementDifficulty();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_IncrementAllMissionStats(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_GodMode(int32 forceEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_GiveAllGenericHeroItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_GameRating_Reset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_GameDLC_ResetAnnouncements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_FSDEvent_ListEvents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_FSDEvent_ClearSeenRewards();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_FlareInfiniteDuration(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_FixedPLSSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_FixedMissionSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_FailMission();
    
    UFUNCTION(BlueprintCallable, Exec, meta=(WorldContext="WorldContextObject"))
    static void C_FadeFromBlack(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Facility_SpawnDataCore();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Facility_DisableShields();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Escort_ShowSmartRockDebug(bool shouldShow);
    
    UFUNCTION(BlueprintCallable, Exec, meta=(WorldContext="WorldContextObject"))
    void C_Escort_SetMuleSpeed(UObject* WorldContextObject, float Speed);
    
    UFUNCTION(BlueprintCallable, Exec, meta=(WorldContext="WorldContextObject"))
    void C_Escort_JumpToNextPhase(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Escort_AddOilShale(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_EndRunSetDebugBonusXp(const float BonusXp) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_EndLevelRemoveDebugBonusXp() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_DLC_ClearAnnounced();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_DisableBackendEvents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_DebugTargetEnemySync(bool FindIt);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void C_DataTerminal_Activate(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_CompleteStageWithoutPlayersEscaping();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_CompleteStage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_CompleteRun();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_CompleteObjectives();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ClearWelcomeMessageSeen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_ClearAllMissionStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_CheckHasOtherCharacterBioboosterDeckEquipped();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Character_ResetXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Character_LevelUp(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Character_AddXP(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_BXE_StartingWeapons_UnlockAll() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_BXE_StartingWeapons_ResetAll() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_BXE_SetStatPrintOutEnabled(bool Active);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_BXE_MissionStats_ResetAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_BXE_GymQuest_Complete();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_BiomeEffectsEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void C_Ascension_SetLevelSpecific(APlayerCharacter* onCharacter, int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Ascension_SetLevel(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Ascension_ClearRewardsSeen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_AscendSelectedCharacter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_AddUncappedXP(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_AddForgingXP(int32 Number);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_AddAllResourcesToInventory(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Ability_Unblock();
    
    UFUNCTION(BlueprintCallable, Exec)
    void C_Ability_SetNoCooldown(bool Inactive);
    
    UFUNCTION(BlueprintCallable)
    void AddResourceToTeamDeposit(UResourceData* Resource, float Amount);
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void AddIntelAndClaimObjectives(const int32 newAmount) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void AddIntel(const int32 newAmount) const;
    
};

