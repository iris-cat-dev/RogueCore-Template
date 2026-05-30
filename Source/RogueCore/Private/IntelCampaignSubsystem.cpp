#include "IntelCampaignSubsystem.h"
#include "Templates/SubclassOf.h"

UIntelCampaignSubsystem::UIntelCampaignSubsystem() {
    this->GameInstance = nullptr;
}

void UIntelCampaignSubsystem::SetIntelPoints(const int32 NewIntelPoints) {
}

void UIntelCampaignSubsystem::ResetRecentIntelProgression() {
}

void UIntelCampaignSubsystem::ResetIntelCampaign() {
}

void UIntelCampaignSubsystem::OnWorldChanged() {
}

FIntelProgression UIntelCampaignSubsystem::GetRecentIntelProgression() const {
    return FIntelProgression{};
}

TArray<UIntelObjective*> UIntelCampaignSubsystem::GetObjectivesWithState(const EIntelObjectiveState State) const {
    return TArray<UIntelObjective*>();
}

TArray<UIntelObjective*> UIntelCampaignSubsystem::GetObjectivesThatCanBeClaimed() const {
    return TArray<UIntelObjective*>();
}

EIntelObjectiveState UIntelCampaignSubsystem::GetObjectiveState(const UIntelObjective* Objective) const {
    return EIntelObjectiveState::Locked;
}

int32 UIntelCampaignSubsystem::GetIntelPoints() const {
    return 0;
}

TArray<TSubclassOf<UIntelChallenge>> UIntelCampaignSubsystem::GetChallengesThatCanBeClaimed() const {
    return TArray<TSubclassOf<UIntelChallenge>>();
}

EIntelChallengeState UIntelCampaignSubsystem::GetChallengeState(const TSubclassOf<UIntelChallenge> ChallengeClass) const {
    return EIntelChallengeState::Locked;
}

int32 UIntelCampaignSubsystem::GetChallengeIntelReward(const TSubclassOf<UIntelChallenge> ChallengeClass) const {
    return 0;
}

TArray<UIntelObjective*> UIntelCampaignSubsystem::GetAllObjectives() const {
    return TArray<UIntelObjective*>();
}

TArray<TSubclassOf<UIntelChallenge>> UIntelCampaignSubsystem::GetActiveChallenges() const {
    return TArray<TSubclassOf<UIntelChallenge>>();
}

UIntelChallenge* UIntelCampaignSubsystem::FindActiveChallengeOfClass(const TSubclassOf<UIntelChallenge> ChallengeClass) const {
    return NULL;
}

FText UIntelCampaignSubsystem::CreateChallengeDescription(const TSubclassOf<UIntelChallenge> ChallengeClass) const {
    return FText::GetEmpty();
}

void UIntelCampaignSubsystem::CompleteIntelCampaign() {
}

void UIntelCampaignSubsystem::ClaimObjective(UIntelObjective* Objective) {
}

void UIntelCampaignSubsystem::ClaimChallenge(const TSubclassOf<UIntelChallenge> ChallengeClass) {
}


