#include "BoosterDeckContainerComponent.h"

UBoosterDeckContainerComponent::UBoosterDeckContainerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBoosterDeckContainerComponent::Server_SetUsedDecks_Implementation(const TArray<UBioBoosterDeck*>& InUsedDecks) {
}

void UBoosterDeckContainerComponent::OnBioBoosterDecksUpdated(const TArray<UBioBoosterDeck*>& InBioBoosterDecks) {
}

TArray<FRewardDispenserReward> UBoosterDeckContainerComponent::GetRandomCardsFromRandomDeck(int32 count, TArray<UBioBoosterDeck*>& OutDecks) {
    return TArray<FRewardDispenserReward>();
}

TArray<FRewardDispenserReward> UBoosterDeckContainerComponent::GetRandomCardsFromAllDecks(int32 count, TArray<UBioBoosterDeck*>& OutDecks) {
    return TArray<FRewardDispenserReward>();
}

TArray<UBioBoosterDeck*> UBoosterDeckContainerComponent::GetDefaultDecks() const {
    return TArray<UBioBoosterDeck*>();
}

void UBoosterDeckContainerComponent::GetDecksFromSaveGame(TArray<UBioBoosterDeck*>& OutDecks) const {
}

TArray<UBioBoosterDeck*> UBoosterDeckContainerComponent::GetDecks() const {
    return TArray<UBioBoosterDeck*>();
}

void UBoosterDeckContainerComponent::Client_SetUsedDecksAndRespond_Implementation() {
}


