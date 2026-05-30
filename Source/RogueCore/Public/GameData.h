#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayTagContainer.h"
#include "AssetsToLoadSettings.h"
#include "BioBoosterDeckSettings.h"
#include "DeploymentSlotRequirement.h"
#include "EPerkName.h"
#include "GDAudio.h"
#include "GDCharacterAscension.h"
#include "GDDamageClasses.h"
#include "GDDifficulty.h"
#include "GDElementTypes.h"
#include "GDGameStatsTracking.h"
#include "GDItemCategoryIDs.h"
#include "GDMissionStats.h"
#include "GDResources.h"
#include "GDStats.h"
#include "GDTasks.h"
#include "GDTerrainTypes.h"
#include "GVisibilityGroups.h"
#include "PerkSettings.h"
#include "Templates/SubclassOf.h"
#include "GameData.generated.h"

class APlayerCharacter;
class UAbilitySettings;
class UAccessCondition;
class UAchievementSettings;
class UAfflictionSettings;
class UAscensionRewardsSettings;
class UBXESettings;
class UBioBoosterDeck;
class UCharacterSettings;
class UCommunicationSettingsAsset;
class UCosmeticSheet;
class UDailyDealSettings;
class UDamageNumberSettings;
class UDamageSettings;
class UDanceSettings;
class UDifficultySetting;
class UDrinkSettings;
class UDynamicIconSettings;
class UEffectSettings;
class UEncounterSettings;
class UEnemySettings;
class UEntitlementSettings;
class UFSDEventCollection;
class UFSDTagSettings;
class UFSDTutorialSettings;
class UForginSettings;
class UGameActivitySettings;
class UGameAnimationSettings;
class UHUDVisibilityGroup;
class UHUDVisibilitySettings;
class UInstancedNiagaraSettings;
class UIntelSettings;
class UInventoryList;
class UItemSettings;
class UItemSkinSettings;
class UKPISettings;
class UKeyBindingSettings;
class ULegacySettings;
class UMinersManual;
class UMissionStat;
class UOpsComTaskAsset;
class UPerkAsset;
class UPerkSettingsAsset;
class UPickaxeSettings;
class UPlanetZoneSetup;
class UPlayerCharacterID;
class UProceduralSettings;
class URewardTreeSettings;
class USaveGameSettings;
class USchematicSettings;
class USeasonSettings;
class UShowroomSettings;
class USpawnSettings;
class USpecialEventSettings;
class UStageSettings;
class UStatusEffectSettings;
class UTerrainMaterialSettings;
class UTexture2D;
class UTreasureSettings;
class UUpgradeSettings;
class UVanitySettings;
class UVictoryPoseSettings;

UCLASS(Blueprintable)
class ROGUECORE_API UGameData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDVisibilitySettings* HUDVisibilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAscensionRewardsSettings* AscensionRewardsSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKPISettings* KPI_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPerkSettingsAsset* PerkSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilitySettings* AbilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDEventCollection* FsdEventsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameActivitySettings* GameActivitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDanceSettings* DanceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameAnimationSettings* AnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemySettings* EnemySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageSettings* DamageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlanetZoneSetup* ZoneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTreasureSettings* TreasureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkSettings* DrinkSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUpgradeSettings* UpgradeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpawnSettings* SpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanitySettings* VanitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyBindingSettings* KeyBindingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXESettings* BXESettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEncounterSettings* EncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForginSettings* ForgingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicSettings* SchematicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSkinSettings* SkinSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialEventSettings* SpecialEventSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProceduralSettings* ProceduralSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPickaxeSettings* PickaxeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDTagSettings* TagSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSettings* ItemSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicIconSettings* DynamicIconSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShowroomSettings* ShowroomSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVictoryPoseSettings* VictoryPoseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDTutorialSettings* TutorialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULegacySettings* LegacySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffectSettings* EffectSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAfflictionSettings* AfflictionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDailyDealSettings* DailyDealSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterialSettings* TerrainMaterialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameSettings* SaveGameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageNumberSettings* DamageNumberSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIntelSettings* IntelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDItemCategoryIDs ItemCategoryIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> LoadoutIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMinersManual* MinersManual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDDamageClasses DamageClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDStats Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDResources Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDElementTypes ElementTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDTerrainTypes TerrainTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDGameStatsTracking GameStatsTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDAudio Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStatusEffectSettings* StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGDCharacterAscension Ascension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBioBoosterDeckSettings BioBoosterDeckSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterSettings* CharacterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAchievementSettings* AchievementSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageSettings* StageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USeasonSettings* SeasonSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInstancedNiagaraSettings* InstancedNiagaraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URewardTreeSettings* RewardTreeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* DefaultCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCosmeticSheet* CosmeticSheet1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag XBoxExcludeRoomTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssetsToLoadSettings AssetsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEntitlementSettings* EntitlementSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunicationSettingsAsset* CommunicationSettingsAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UAccessCondition*> AccessConditions;
    
public:
    UGameData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheatConsolesEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGVisibilityGroups GetVisibilityGroups() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGDTasks GetTaskData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerRankName(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPlayerCharacterID*> GetPlayerCharacterIds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetPlayerCharacterID(const FGuid& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPerkSettings GetPerkData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPerkAsset* GetPerk(const EPerkName InPerkName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGDMissionStats GetMissionStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumberOfDeployments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryList* GetInventoryList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultySetting* GetDifficultySetting(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDifficultyIndex(UDifficultySetting* NewDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDeploymentSlotRequirement GetDeploymentSlotCost(int32 InSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerCharacterID* GetDefaultCharacterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APlayerCharacter> GetDefaultCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDefaultBioBoosterDecks(const UPlayerCharacterID* InCharacter, TArray<UBioBoosterDeck*>& OutDecks) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAscensionMeritCost(const int32 TimesAscended) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UHUDVisibilityGroup*> GetAllVisibilityGroups(bool InSorted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOpsComTaskAsset*> GetAllTasks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMissionStat*> GetAllMissionStats() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMissionStat*> GetAllInfirmaryStats() const;
    
};

