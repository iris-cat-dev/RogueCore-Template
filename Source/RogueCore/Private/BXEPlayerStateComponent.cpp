#include "BXEPlayerStateComponent.h"
#include "Net/UnrealNetwork.h"

UBXEPlayerStateComponent::UBXEPlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBXEPlayerStateComponent::SetUnlocksInBugReporter() {
}

void UBXEPlayerStateComponent::Server_SetStartLoadout_Implementation(const FBXEStartLoadout& InLoadout) {
}

void UBXEPlayerStateComponent::Server_ReadyUp_SetIsReady_Implementation() {
}

void UBXEPlayerStateComponent::Server_ApplyUnlocksToPlayer_Implementation(const TArray<FBXEUnlockInstance>& inUnlocks, const FItemSlotIndex InSlot) {
}

void UBXEPlayerStateComponent::Server_AddAttributeToUnlockInstance_Implementation(const FBXEUnlockInstance& InInstance, UBXEAttributeUnlock* InAttribute, AActor* PreviousActor) {
}

void UBXEPlayerStateComponent::OnRep_StartLoadOut(const FBXEStartLoadout& OldLoadout) {
}

void UBXEPlayerStateComponent::OnRep_PlayerData(const FBXEPlayerData& OldData) {
}

int32 UBXEPlayerStateComponent::GetUnlockInstanceCount(UObject* WorldContext, const FBXEUnlockInstance& InUnlock) const {
    return 0;
}

FBXEUnlockInstance UBXEPlayerStateComponent::GetUnlockInSlot(FItemSlotIndex InSlot) const {
    return FBXEUnlockInstance{};
}

int32 UBXEPlayerStateComponent::GetUnlockCount(UObject* WorldContext, UBXEUnlockBase* InUnlock) const {
    return 0;
}

UBXEStartingWeapon* UBXEPlayerStateComponent::GetStartingWeapon() const {
    return NULL;
}

UBXEPlayerStateComponent* UBXEPlayerStateComponent::GetLocalBXEPlayerState(const UObject* WorldContext) {
    return NULL;
}

TArray<FBXEUnlockInstance> UBXEPlayerStateComponent::GetCurrentUnlocks(UObject* WorldContext) const {
    return TArray<FBXEUnlockInstance>();
}

TArray<FBXEUnlockInstance> UBXEPlayerStateComponent::GetAllUnlocksInSlot(FItemSlotIndex InSlot) const {
    return TArray<FBXEUnlockInstance>();
}

void UBXEPlayerStateComponent::Client_ReceiveLevelUp_Implementation(int32 inLevel, const TArray<UBXEUnlockBase*>& inUnlocks, const TArray<UBXEUnlockRarity*>& InUnlockRarities) {
}

void UBXEPlayerStateComponent::Client_ReadyUp_SetState_Implementation(const FReadyUpState& InState) {
}

void UBXEPlayerStateComponent::Cheat_StartNegotiation_Implementation(UObject* WorldContext, UBXEUnlockCollection* InRewardPool) {
}

void UBXEPlayerStateComponent::Cheat_RemoveUnlockFromPlayer_Implementation(UBXEUnlockBase* InUnlock, FItemSlotIndex InSlot) {
}

void UBXEPlayerStateComponent::Cheat_PrintOutBXEStats() {
}

void UBXEPlayerStateComponent::Cheat_LevelUp_Implementation() {
}

TArray<UBXEUnlockBase*> UBXEPlayerStateComponent::Cheat_GatherUnlocksForSlot(FItemSlotIndex InSlot) {
    return TArray<UBXEUnlockBase*>();
}

TArray<UBXEUnlockCollection*> UBXEPlayerStateComponent::Cheat_GatherNegotiationCollections() {
    return TArray<UBXEUnlockCollection*>();
}

void UBXEPlayerStateComponent::Cheat_ApplyUnlockToPlayer_Implementation(UBXEUnlockBase* InUnlock, FItemSlotIndex InSlot, const TArray<UBXEAttributeUnlock*>& Attributes) {
}

void UBXEPlayerStateComponent::Cheat_AddXP_Player_Implementation(int32 InXP) {
}

void UBXEPlayerStateComponent::Cheat_AddXP_Implementation(int32 InXP) {
}

void UBXEPlayerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBXEPlayerStateComponent, PlayerData);
    DOREPLIFETIME(UBXEPlayerStateComponent, StartLoadout);
}


