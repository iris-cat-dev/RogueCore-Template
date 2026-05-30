#include "SaveGameStateComponent.h"
#include "Net/UnrealNetwork.h"

USaveGameStateComponent::USaveGameStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VictoryPose = nullptr;
}

void USaveGameStateComponent::SetCampaign() {
}

void USaveGameStateComponent::Server_SetVictoryPose_Implementation(UVictoryPose* Pose) {
}

void USaveGameStateComponent::Server_SetResourcesSave_Implementation(const FResourcesSave& InSave) {
}

void USaveGameStateComponent::Server_SetPlayerProgress_Implementation(const FPlayerProgress& Progress) {
}

void USaveGameStateComponent::Server_SetLoadout_Implementation(const FItemLoadout& Loadout, const FReplicatedItemUpgrades& upgrades) {
}

void USaveGameStateComponent::Server_SetCharacterStats_Implementation(const TArray<FCharacterProgress>& Stats) {
}

void USaveGameStateComponent::Server_SetActiveCampaignMission_Implementation(FActiveCampaingMission Data) {
}

void USaveGameStateComponent::RefreshLoadoutFromSave(UPlayerCharacterID* characterID) {
}

void USaveGameStateComponent::OnRep_PlayerProgress() {
}

void USaveGameStateComponent::OnRep_ItemUpgradeSelections() {
}

void USaveGameStateComponent::OnRep_CharacterStats() {
}

FCharacterProgress USaveGameStateComponent::GetCharacterStat(UPlayerCharacterID* characterID) {
    return FCharacterProgress{};
}

UStage* USaveGameStateComponent::GetActiveCampaignMission() const {
    return NULL;
}

void USaveGameStateComponent::ClaimAndNotifyAscensionRewards() {
}

bool USaveGameStateComponent::CanAfford(const UResourceData* Resource, const float Price) const {
    return false;
}

int32 USaveGameStateComponent::AscendSelectedCharacter() {
    return 0;
}

void USaveGameStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USaveGameStateComponent, ReplicatedResourcesSave);
    DOREPLIFETIME(USaveGameStateComponent, VictoryPose);
    DOREPLIFETIME(USaveGameStateComponent, ActiveCampaignMission);
    DOREPLIFETIME(USaveGameStateComponent, ReplicatedItemUpgrades);
    DOREPLIFETIME(USaveGameStateComponent, PlayerProgress);
    DOREPLIFETIME(USaveGameStateComponent, CharacterStats);
}


