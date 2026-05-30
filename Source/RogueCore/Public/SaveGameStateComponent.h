#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ActiveCampaingMission.h"
#include "CharacterProgress.h"
#include "CharacterProgressChangedSignatureDelegate.h"
#include "DelegateDelegate.h"
#include "ItemLoadout.h"
#include "LoadoutChangedDelegateDelegate.h"
#include "PlayerProgress.h"
#include "PlayerProgressChangedSignatureDelegate.h"
#include "ReplicatedItemUpgrades.h"
#include "ResourcesSave.h"
#include "Templates/SubclassOf.h"
#include "SaveGameStateComponent.generated.h"

class AActor;
class UItemUpgrade;
class UPlayerCharacterID;
class UResourceData;
class UStage;
class UVictoryPose;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USaveGameStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemUpgradeEquipSignature, TSubclassOf<AActor>, itemClass, UItemUpgrade*, upgrade);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemUpgradeCraftSignature, UItemUpgrade*, upgrade);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProgressChangedSignature OnPlayerProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutChangedDelegate OnLoadoutChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterProgressChangedSignature OnCharacterStatsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnAscensionRewardsClaimed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FResourcesSave ReplicatedResourcesSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UVictoryPose* VictoryPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemLoadout EquippedLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FActiveCampaingMission ActiveCampaignMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ItemUpgradeSelections, meta=(AllowPrivateAccess=true))
    FReplicatedItemUpgrades ReplicatedItemUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerProgress, meta=(AllowPrivateAccess=true))
    FPlayerProgress PlayerProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CharacterStats, meta=(AllowPrivateAccess=true))
    TArray<FCharacterProgress> CharacterStats;
    
public:
    USaveGameStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetCampaign();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetVictoryPose(UVictoryPose* Pose);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetResourcesSave(const FResourcesSave& InSave);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPlayerProgress(const FPlayerProgress& Progress);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetLoadout(const FItemLoadout& Loadout, const FReplicatedItemUpgrades& upgrades);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetCharacterStats(const TArray<FCharacterProgress>& Stats);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetActiveCampaignMission(FActiveCampaingMission Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshLoadoutFromSave(UPlayerCharacterID* characterID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemUpgradeSelections();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterStats();
    
public:
    UFUNCTION(BlueprintCallable)
    FCharacterProgress GetCharacterStat(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStage* GetActiveCampaignMission() const;
    
    UFUNCTION(BlueprintCallable)
    void ClaimAndNotifyAscensionRewards();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAfford(const UResourceData* Resource, const float Price) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AscendSelectedCharacter();
    
};

