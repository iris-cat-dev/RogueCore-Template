#include "FSDPlayerState.h"
#include "BXENegotiationParticipantComponent.h"
#include "BXEPlayerStateComponent.h"
#include "Net/UnrealNetwork.h"
#include "PlayerRejoinState.h"
#include "PlayerStatsComponent.h"
#include "RunHistoryStateComponent.h"
#include "SaveGameStateComponent.h"
#include "Templates/SubclassOf.h"
#include "VoteParticipantComponent.h"

AFSDPlayerState::AFSDPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FractionLevelGenerated = 0.00f;
    this->BXEStateComponent = CreateDefaultSubobject<UBXEPlayerStateComponent>(TEXT("BXEStateComponent"));
    this->BXENegotiationParticipant = CreateDefaultSubobject<UBXENegotiationParticipantComponent>(TEXT("BXENegotiationParticipantComponent"));
    this->VoteParticipant = CreateDefaultSubobject<UVoteParticipantComponent>(TEXT("VoteParticipantComponent"));
    this->RunHistoryStateComponent = CreateDefaultSubobject<URunHistoryStateComponent>(TEXT("RunHistoryStateComponent"));
    this->SelectedCharacter = nullptr;
    this->bIsServer = false;
    this->ShouldCopyProperties = false;
    this->gameOwnerStatus = 0;
    this->IsOnSpaceRig = false;
    this->PlayerStatsComponent = CreateDefaultSubobject<UPlayerStatsComponent>(TEXT("PlayerStatsComponent"));
    this->RejoinState = CreateDefaultSubobject<UPlayerRejoinState>(TEXT("RejoinState"));
    this->SaveGameStateComponent = CreateDefaultSubobject<USaveGameStateComponent>(TEXT("SaveGameStateComponent"));
    this->PlayerCharacter = nullptr;
    this->IsInMission = false;
    this->IsTalking = false;
    this->HasGeneratedLevel = false;
    this->HasSelectedCharacter = false;
    this->PlayerResources = nullptr;
    this->SupplyAmmoStatus = 0;
    this->SupplyHealthStatus = 0;
    this->bIsLateJoinComplete = false;
    this->bHaveLateJoinedAfterStageTimerStart = false;
}


void AFSDPlayerState::SetSelectedCharacterID(UPlayerCharacterID* characterID) {
}

void AFSDPlayerState::SetSelectedCharacter(TSubclassOf<APlayerCharacter> newCharacter) {
}

void AFSDPlayerState::SetLateJoinComplete(const bool IsComplete) {
}

void AFSDPlayerState::SetHaveLateJoinedAfterStageTimerStart(const bool WasAfterTimer) {
}

void AFSDPlayerState::SetHasGeneratedLevel(bool hasgenerated) {
}

void AFSDPlayerState::SetCanOnlySpectate(bool canOnlySpectate) {
}

void AFSDPlayerState::ServerSetSelectedCharacter_Implementation(TSubclassOf<APlayerCharacter> newCharacter) {
}

void AFSDPlayerState::ServerInitializePerks_Implementation(const TArray<UPerkAsset*>& ClassPerks, const TArray<UPerkAsset*>& Enhancements) {
}

void AFSDPlayerState::Server_SetSupplyStatus_Implementation(uint8 StatusHealth, uint8 StatusAmmo) {
}

void AFSDPlayerState::Server_SetGameOwnerStatus_Implementation(int32 NewGameOwnerStatus) {
}

void AFSDPlayerState::OnRep_SupplyHealthStatus() {
}

void AFSDPlayerState::OnRep_SupplyAmmoStatus() {
}

void AFSDPlayerState::OnRep_SelectedCharacter() {
}

void AFSDPlayerState::OnRep_PlayerCharacter() {
}

void AFSDPlayerState::OnRep_LevelGenerationState() {
}

void AFSDPlayerState::OnRep_GameOwnerStatus() {
}

void AFSDPlayerState::OnRep_FractionLevelGenerated() {
}


bool AFSDPlayerState::IsSelectedCharacterMaxLevel() const {
    return false;
}

bool AFSDPlayerState::IsLateJoinComplete() const {
    return false;
}

bool AFSDPlayerState::HaveLateJoinedAfterStageTimerStart() const {
    return false;
}

bool AFSDPlayerState::HasNormalOwnerStatus() const {
    return false;
}

TArray<FXPReward> AFSDPlayerState::GetXPRewardRogueCore() const {
    return TArray<FXPReward>();
}

UVoteParticipantComponent* AFSDPlayerState::GetVoteParticipant() const {
    return NULL;
}

int32 AFSDPlayerState::GetUIPing() {
    return 0;
}

float AFSDPlayerState::GetSupplyHealthStatus() const {
    return 0.0f;
}

float AFSDPlayerState::GetSupplyAmmoStatus() const {
    return 0.0f;
}

int32 AFSDPlayerState::GetSelectedCharacterMaxLevel() const {
    return 0;
}

int32 AFSDPlayerState::GetSelectedCharacterLevel() const {
    return 0;
}

UPlayerCharacterID* AFSDPlayerState::GetSelectedCharacterID() const {
    return NULL;
}

TSubclassOf<APlayerCharacter> AFSDPlayerState::GetSelectedCharacter() const {
    return NULL;
}

FCharacterProgress AFSDPlayerState::GetSelectCharacterProgress() {
    return FCharacterProgress{};
}

URunHistoryStateComponent* AFSDPlayerState::GetRunHistoryStateComponent() const {
    return NULL;
}

UPlayerResourceComponent* AFSDPlayerState::GetPlayerResourceComponent() const {
    return NULL;
}

int32 AFSDPlayerState::GetPlayerRank() const {
    return 0;
}

bool AFSDPlayerState::GetHasGeneratedLevel() const {
    return false;
}

bool AFSDPlayerState::GetGameOwnerStatus(EGameOwnerStatus status) const {
    return false;
}

AFSDPlayerController* AFSDPlayerState::GetFSDPlayerController() const {
    return NULL;
}

FCurrencyRewardsForUI AFSDPlayerState::GetChipReward() const {
    return FCurrencyRewardsForUI{};
}

EChatSenderType AFSDPlayerState::GetChatSenderType() const {
    return EChatSenderType::NormalUser;
}

FCharacterProgress AFSDPlayerState::GetCharacterProgress(UPlayerCharacterID* characterID) const {
    return FCharacterProgress{};
}

int32 AFSDPlayerState::GetCharacterLevel(UPlayerCharacterID* characterID) const {
    return 0;
}

UBXENegotiationParticipantComponent* AFSDPlayerState::GetBXENegotiationParticipant() const {
    return NULL;
}




void AFSDPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFSDPlayerState, FractionLevelGenerated);
    DOREPLIFETIME(AFSDPlayerState, LevelGenerationState);
    DOREPLIFETIME(AFSDPlayerState, LatestEquipedVanity);
    DOREPLIFETIME(AFSDPlayerState, SelectedCharacter);
    DOREPLIFETIME(AFSDPlayerState, bIsServer);
    DOREPLIFETIME(AFSDPlayerState, gameOwnerStatus);
    DOREPLIFETIME(AFSDPlayerState, PlayerCharacter);
    DOREPLIFETIME(AFSDPlayerState, HasSelectedCharacter);
    DOREPLIFETIME(AFSDPlayerState, SupplyAmmoStatus);
    DOREPLIFETIME(AFSDPlayerState, SupplyHealthStatus);
    DOREPLIFETIME(AFSDPlayerState, bIsLateJoinComplete);
    DOREPLIFETIME(AFSDPlayerState, bHaveLateJoinedAfterStageTimerStart);
}


