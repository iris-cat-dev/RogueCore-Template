#include "VoteParticipantComponent.h"

UVoteParticipantComponent::UVoteParticipantComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VoteWidget = nullptr;
    this->MyVoteIndex = -1;
}

void UVoteParticipantComponent::Server_Vote_Implementation(int32 InVoteIndex) {
}

void UVoteParticipantComponent::Server_RecordParticipantCursor_Implementation(const FVector2f& Pos) {
}

void UVoteParticipantComponent::Client_SetVoteData_Implementation(const FVoteData& InData) {
}

void UVoteParticipantComponent::Client_ReceiveParticipantCursor_Implementation(AFSDPlayerState* InPlayer, const FVector2f& InPos) {
}


